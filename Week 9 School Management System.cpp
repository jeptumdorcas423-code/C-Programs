#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
public:
    string admissionNumber;
    string studentClass;

    void displayStudent() {
        displayPerson();

        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Class: " << studentClass << endl;
    }
};

int main() {
    Student student1;

    cout << "Enter Student Name: ";
    getline(cin, student1.name);

    cout << "Enter Age: ";
    cin >> student1.age;

    cin.ignore();

    cout << "Enter Admission Number: ";
    getline(cin, student1.admissionNumber);

    cout << "Enter Class: ";
    getline(cin, student1.studentClass);

    cout << "\n--- STUDENT DETAILS ---" << endl;

    student1.displayStudent();

    return 0;
}