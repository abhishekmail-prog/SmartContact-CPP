#include <../include/contact_manager.cpp>
#include <iostream>
#include <algorithm>

void ContactManager::addContact(const Contact& contact)  {
	contacts.push_back(contact);
}

void removeContact(const std::string& name) {
	
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
		if(contact.getname() == name) {
			return &contact;
		}
	}

	return nullptr;
}


