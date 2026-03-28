#include <iostream>
#include <string>
#include "include/contact_manager.hpp"

int main() {
	
	ContactManager manager;
	manager.loadContacts("data/contacts.txt");

	int choice;

	while(true) {
		std::cout << "\n==== Smart Contact Manager ====\n";
		std::cout << "1. Add Contact\n";
		std::cout << "2. Delete Contact\n";
		std::cout << "3. Search Contact\n";
		std::cout << "4. Display Contacts\n";
		std::cout << "5. Save Contacts\n";
		std::cout << "6. Edit Contact\n";
		std::cout << "7. Exit\n";
		std::cout << "Enter your choice: ";
		std::cin >> choice;

		switch(choice) {
			case 1: {
				std::string name, phone, email;
				std::cin.ignore(); // clears leftover newline

				std::cout << "Enter name: ";
				getline(std::cin, name);

				std::cout << "Enter phone: ";
				std::cin >> phone;

				std::cout << "Enter email: ";
				std::cin >> email;

				try {
					Contact contact(name, phone, email);
					manager.addContact(contact);
					std::cout << "Contact added successfully.\n";
				}
				catch(const std::exception& e) {
					std::cout << "Error: " << e.what() << '\n';
				}

				break;
			}

			case 2: {
				std::string name;

				std::cout << "Enter name to remove: ";
				std::cin >> name;

				try {
					manager.removeContact(name);
					std::cout << "Contact removed successfully.\n";
				}
				catch(const std::exception& e) {
					std::cout << "Error: " << e.what() << '\n';
				}

				break;
			}

			case 3: {
				std::string name;

				std::cout << "Enter name to search: ";
				std::cin >> name;

				manager.searchContact(name);
				
			/*	if(result != nullptr) {
					std::cout << "Contact Found:\n";
					std::cout << result->getName() << " | "
						  << result->getPhone() << " | "
						  << result->getEmail() << "\n";
				}
				else {
					std::cout << "Contact not found.\n";
				}*/

				break;
			}

			case 4: {
				manager.displayContacts();
				break;
			}

			case 5: {
			//	manager.loadContacts("data/contacts.txt");
				manager.saveContacts("data/contacts.txt");
				std::cout << "Contacts saved. Exiting...\n";
				return 0;
			}

			case 6: {
				
				break;
			}
			case 7: {
				std::cout << "Exiting program...\n";
				return 0;
			}

			default:			std::cout << "Invalid choice! Try again.\n";
		}
	}

	return 0;
}
