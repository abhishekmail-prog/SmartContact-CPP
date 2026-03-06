#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <stdexcept>

class Contact {
private:
	std::string name;
	std::string phone;
	std::string email;

	void validateName(const std::string& name);
	void validatePhone(const std::string& phone);
	void validateEmail(const std::string& email);

public:
	// Constructor
	Contact(const std::string& name, const std::string& phone, const std::string& email);

	// Optional email setter
	void setEmail(const std::string& email);

	// Getters
	const std::string& getName() const;
	const std::string& getPhone() const;
	const std::string& getEmail() const;
};

#endif
