# Smart Contact Manager (C++)

A simple **Command Line Interface (CLI) Contact Manager** built using **C++** and **Object-Oriented Programming (OOP)** principles.

This project allows users to **add, delete, search, edit, and display contacts** using a menu-driven terminal interface.  
It also demonstrates **modular C++ design, file handling, exception handling, and usage of STL containers**.

---

## Features

- Add a new contact
- Delete a contact by name
- Search for a contact
- Display all contacts
- Edit existing contacts
- Save contacts to a file
- Load contacts automatically when the program starts
- Input validation with exception handling
- Interactive CLI menu
- Modular project structure

---

## Concepts Used

This project demonstrates several important **C++ programming concepts**:

- Object-Oriented Programming (OOP)
- Classes and Encapsulation
- Constructors
- Exception Handling
- References and Const Correctness
- STL Containers (`std::vector`)
- File Handling (`ifstream`, `ofstream`)
- Modular C++ Project Structure
- CLI Application Design

---

## Project Structure

```
Smart-Contact-Manager/
│
├── include/
│   ├── contact.hpp
│   └── contact_manager.hpp
│
├── src/
│   ├── contact.cpp
│   └── contact_manager.cpp
│
├── data/
│   └── contacts.txt
│
├── main.cpp
└── README.md
```

---

## How to Compile and Run

Compile the program using **g++**:

```
g++ main.cpp src/contact.cpp src/contact_manager.cpp -o contact_manager
```

Run the program:

```
./contact_manager
```

---

## Example Menu

```
1. Add Contact
2. Delete Contact
3. Search Contact
4. Display Contacts
5. Edit Contact
6. Exit
```

---

## Future Improvements

Possible upgrades for this project:

- Sort contacts alphabetically
- Faster searching using `unordered_map`
- Import / export contacts
- Improve CLI interface
- Add duplicate contact detection
- Add contact IDs

---

## Learning Goal

This project was built to practice **C++ system design and object-oriented programming** while building a real **command-line application**.

---

## License

This project is open source and intended for **learning and experimentation**.

