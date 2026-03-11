#include "../include/contact.hpp"
#include <cctype>

Contact::Contact(const std::string& name, const std::string& phone, const std::string& email) {
	// We validate first
	validateName(name);  
	validatePhone(phone);
	validateEmail(email);

	// Then assign it
	this->name = name;
	this->phone = phone;
	this->email = email;
}

void Contact::validateName(const std::string& name) {
	if(name.empty()) {
		throw std::invalid_argument("Name canot be empty.\n");
	}
}

void Contact::validatePhone(const std::string& phone) {
	if(phone.length() != 10) {
		throw std::invalid_argument("Phone number must be 10 digits.\n");
	}

	for(char ch : phone) {
		if(!std::isdigit(ch)) { // checks if we have any data other than digit.
			throw std::invalid_argument("Phone number must contain only digits.\n");
		} 
	}
}

void Contact::setEmail(const std::string& email) {
	validateEmail(email);
	this->email = email;
}

void Contact::validateEmail(const std::string& email) {
	if(email.empty()) {
		return; // optional email allowed
	}

	if(email.find('@') == std::string::npos) { // checks does @ exist in the string
		throw std::invalid_argument("Invalid email format.\n");
	} 
}

// Getters
const std::string& Contact::getName() const {
	return name;
}

const std::string& Contact::getPhone() const {
	return phone;
}

const std::string& Contact::getEmail() const {
	return email;
}

void Contact::set_Name(const std::string& name) {
	this->name = name;
}

void Contact::set_Phone(const std::string& phone) {
	this->phone = phone;
}

void Contact::set_Email(const std::string& email) {
	this->email = email;
}
