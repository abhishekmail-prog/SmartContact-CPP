#include "../include/contact_manager.hpp"
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <fstream>

void ContactManager::addContact(const Contact& contact)  {
	contacts.push_back(contact);
}

void ContactManager::removeContact(const std::string& name) {
	
	// searches from very frist contact to the last.
	auto it = std::remove_if(contacts.begin(), contacts.end(), 
		
		// Lambda: compare every contact's name with the given name[&name].
		[&name](const Contact& contact) { 
			return contact.getName() == name;
		});

	// checks if (it) ended up at the very end without finding anything.
	if(it == contacts.end()) { 
		throw std::runtime_error("Contact not found");
	}

	// deletes the conatct from it to end
	contacts.erase(it, contacts.end());
}

Contact* ContactManager::searchContact(const std::string& name) {
	for(Contact& contact : contacts) {
		if(contact.getName() == name) {
			return &contact;
		}
	}

	return nullptr;
}

void ContactManager::displayContacts() const {
	if(contacts.empty()) {
		std::cout << "No conatcts available\n";
		return;
	}

	int index = 1;

	std::cout << "S.No" << std::setw(25) << " | "
		  << "Name" << std::setw(25) << " | "
		  << "Phone Number" << std::setw(25) << " | "
		  << "Email" << std::setw(25) << '\n';

	for(const Contact& c : contacts) {
		std::cout << std::left << index++ << ". " <<  std::setw(25)
			  << c.getName() << " | " << std::setw(25)
			  << c.getPhone() << " | " << std::setw(25)
			  << c.getEmail() << "\n";
	}
}

void ContactManager::saveContacts(const std::string& filename) const {
	
	std::ofstream file(filename); // open file

	if(!file) {
		std::cerr << "Error opening file!.\n";
		return;
	}

	for(const Contact& c : contacts) {
		file << c.getName() << ", "
		     << c.getPhone() << ", "
		     << c.getEmail() << "\n";
	}

}

void ContactManager::loadContacts(const std::string& filename) {

	std::ifstream file(filename);

	if(!file) {
		return;
	}

	std::string name, phone, email;

	while(std::getline(file, name, ',') &&
	      std::getline(file, phone, ',') &&
	      std::getline(file, email)) {
		
		try {
			Contact contact(name, phone, email);
			contacts.push_back(contact);
		}

		catch(...) {
		}
	}
}
