// Define an abstract class Animal with a pure virtual function sound(). 
// Derive classes Dog and Cat from Animal and override the sound() function.
#include <iostream>

class Animal {
public:
    virtual void sound() const = 0; // Pure virtual function
};

class Dog : public Animal {
public:
    void sound() const override {
        std::cout << "Woof Woof" << std::endl;
    }
};

class Cat : public Animal {
public:
    void sound() const override {
        std::cout << "Meow Meow" << std::endl;
    }
};

int main() {
    Dog d;
    Cat c;

    d.sound();
    c.sound();

    return 0;
}
