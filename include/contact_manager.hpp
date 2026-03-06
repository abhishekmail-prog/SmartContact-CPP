#ifndef CONTACT_MANAGER_HPP
#define CONTACT_MANAGER_HPP

#include <vector>
#include <string>
#include "contact.hpp"

class ContactManager {
private:
	std::vector<Contact> contacts;

public:
	void addContact(const Contact& contact);

	void removeContact(const std::string& phone);

	Contact* searchContact(const std::string& phone);

	void displayContacts() const;
};

#endif
