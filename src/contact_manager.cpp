#include "../include/contact_manager.hpp"
#include <iostream>
#include <algorithm>
#include <iomanip>

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
