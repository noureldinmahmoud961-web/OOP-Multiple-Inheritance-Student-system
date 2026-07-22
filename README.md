# C++ Multiple Inheritance - Student System

This project is a practical example of **Multiple Inheritance** in Object-Oriented Programming (OOP) using C++.

### Concept
- **Class A (Person):** Handles name and age.
- **Class B (Contact):** Handles email.
- **Class C (Student):** Inherits from both A and B and adds final grade.

### How it works
When an object of class C is created, constructors of A and B are called automatically, then the constructor of C. The `print()` method uses scope resolution `A::print1()` and `B::print2()` to display all data.

### Output Example
