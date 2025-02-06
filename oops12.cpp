// Implement a class Counter with a static data member count and a static member function getCount() to keep track of the number of objects created.

#include <iostream>

class Counter {
private:
    static int count;
public:
    Counter() {
        ++count;
    }
    static int getCount() {
        return count;
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    std::cout << "Number of objects created: " << Counter::getCount() << std::endl;
    return 0;
}
