// Design a class Circle with a private member radius. Include a default constructor, a parameterized constructor, and a destructor. 
// The class should have methods to calculate and return the area and circumference. Demonstrate object creation using both constructors.

#include <iostream>
#include <cmath>
using namespace std;
class Circle {
private:
    double radius;
public:
    Circle() : radius(0.0) {
        cout << "Default constructor called." << endl;
    }
    Circle(double r) : radius(r) {
        cout << "Parameterized constructor called." << endl;
    }
    ~Circle() {
        cout << "Destructor called." << endl;
    }
    double area() const {
        return M_PI * radius * radius;
    }
    double circumference() const {
        return 2 * M_PI * radius;
    }
};

int main() {
    Circle c1;
    Circle c2(5.0);
    cout << "Circle c1 area: " << c1.area();
    cout << "Circle c2 area: " << c2.area();
    return 0;
}
