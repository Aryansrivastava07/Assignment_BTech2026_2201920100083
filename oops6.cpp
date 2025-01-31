// Create a base class Vehicle with a protected member speed. Derive a class Car that inherits from Vehicle.
//  Add a member function in Car to set the speed and another to display it.
#include <iostream>

class Vehicle {
protected:
    double speed;
};

class Car : public Vehicle {
public:
    void setSpeed(double s) {
        speed = s;
    }

    void displaySpeed() const {
        std::cout << "Speed of the car: " << speed << " km/h" << std::endl;
    }
};

int main() {
    Car myCar;
    myCar.setSpeed(120.0);
    myCar.displaySpeed();

    return 0;
}
