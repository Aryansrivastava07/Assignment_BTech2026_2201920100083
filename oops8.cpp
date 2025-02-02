// Create two classes, ClassA and ClassB. ClassB should have a member function that returns the private member of ClassA. 
// Use a friend function to access ClassA's private data from ClassB.
#include <iostream>

class ClassA;

class ClassB {
public:
    int getPrivateMember(ClassA& objA);
};

class ClassA {
private:
    int privateData;

public:
    ClassA(int data) : privateData(data) {}
    friend int ClassB::getPrivateMember(ClassA& objA);
};

int ClassB::getPrivateMember(ClassA& objA) {
    return objA.privateData;
}

int main() {
    ClassA objA(42);
    ClassB objB;

    std::cout << "Private data from ClassA: " << objB.getPrivateMember(objA) << std::endl;

    return 0;
}
