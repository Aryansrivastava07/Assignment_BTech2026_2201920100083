// Define a base class Shape with a virtual function area(). Derive classes Rectangle and Circle from Shape and override the area() function.
//  Write a program that calculates the area of a rectangle and a circle using pointers to the base class.
#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double area() const = 0; // Pure virtual function
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    Shape* shape1 = new Rectangle(5.0, 3.0);
    Shape* shape2 = new Circle(4.0);

    std::cout << "Area of Rectangle: " << shape1->area() << std::endl;
    std::cout << "Area of Circle: " << shape2->area() << std::endl;

    // delete shape1;
    // delete shape2;

    return 0;
}
