#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    string brand;
    int year;

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year of Manufacture: " << year << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    int numberOfDoors;
    int engineCapacity;

    void displayCar() {
        displayVehicle();

        cout << "Number of Doors: " << numberOfDoors << endl;
        cout << "Engine Capacity: " << engineCapacity << " CC" << endl;
    }
};

int main() {
    Car car1;

    cout << "Enter Car Brand: ";
    getline(cin, car1.brand);

    cout << "Enter Year of Manufacture: ";
    cin >> car1.year;

    cout << "Enter Number of Doors: ";
    cin >> car1.numberOfDoors;

    cout << "Enter Engine Capacity (CC): ";
    cin >> car1.engineCapacity;

    cout << "\n--- CAR DETAILS ---" << endl;

    car1.displayCar();

    return 0;
}