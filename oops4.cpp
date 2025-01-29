// Suppose you are designing a basic system to model different types of animals. There are two types of animals: Animal and Dog. Each animal has an attribute called name.

//     Create a base class Animal with a property name (a string).
//     Create a class Dog that inherits from Animal. The Dog class should have an additional property breed (a string) to represent the breed of the dog.
//     In the main function, create an instance of the Dog class, set its name and breed properties, and then display the name and breed of the dog.

// Ensure that the base class Animal and the derived class Dog are correctly designed and that the properties are inherited and initialized properly.
#include <iostream>
#include <string>
using namespace std;

// Base class Animal
class Animal {
public:
    string name;

    Animal(string name) : name(name) {}
};

// Derived class Dog
class Dog : public Animal {
public:
    string breed;

    Dog(string name, string breed) : Animal(name), breed(breed) {}

    void displayInfo() {
        cout << name << endl;
        cout << breed << endl;
    }
};

int main() {
    string name,breed;
    cin >> name >> breed ;
    // Create a Dog object
    Dog myDog( name , breed );

    // Display information about the Dog
    myDog.displayInfo();

    return 0;
}
