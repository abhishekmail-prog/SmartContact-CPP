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

	void searchContact(const std::string& query);

	void displayContacts() const;

	void saveContacts(const std::string& filename) const;

	void loadContacts(const std::string& filename);

	void editContacts(const std::string& name);
};

#endif
