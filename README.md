# Smart Contact Manager (C++)

A simple Command Line Interface (CLI) Contact Manager built using C++ and 
Object-Oriented Programming principles.

This project lets you add, remove, search and display contacts from the terminal
using a simple interactive menu. It uses OOP design, exception handling, modular
project structure and C++ STL containers.

---

## Features

- Adds a new contact
- Remove a contact by name
- Search for a contact
- Dipslay all contacts
- Input validation with exception handling
- Interactive CLI menu
- Modular project structure

---

## Concepts Used

This project demonstrates important C++ concepts:

- Object-Oriented Programming (OOP)
- Classes and Encapsulation
- Constructors
- Exception Handling
- References and Const Correctness
- STL Containers (std::vector)
- Lambda Functions
- Modular C++ Project Structure
- CLI Application Design

---

## Project Structure

SmartContact-CPP/
│
├── include/
│   ├── contact.hpp
│   └── contact_manager.hpp
│
├── src/
│   ├── contact.cpp
│   └── contact_manager.cpp
│
├── main.cpp
└── README.md

---

## How to Compile and Run

Compile the program using g++:

	g++ main.cpp src/contact.cpp src/contact_manager.cpp -o contact_manager

Run the program:

	./contact_manager

---

## Future Improvements

Possible upgrades for this project:

	- Save contacts to a file
	- Load contacts at program startup
	- Sort contacts alphabetiacally
	- Faster searach using unordered_map
	- Improve CLI Interface
	- Add contact editing feature

---

## Learning Goal

This project was build to practice C++ system design and object-oriented programming
while building real command-line application.

---

## License

This project is open source and available for learning and experimentation.
