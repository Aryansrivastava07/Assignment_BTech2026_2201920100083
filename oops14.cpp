// Create a base class Base with a virtual function show(). Derive a class Derived that overrides the show() function.

#include <iostream>

class Base {
public:
    virtual void show() const {
        std::cout << "Base class show function" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() const override {
        std::cout << "Derived class show function" << std::endl;
    }
};

int main() {
    Base* b = new Derived();
    b->show();

    delete b;
    return 0;
}

