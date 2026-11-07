#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string studentName;
    int admissionNumber;
    double feeBalance;

public:

    // Function to input student details
    void inputStudent()
    {
        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Admission Number: ";
        cin >> admissionNumber;

        cout << "Enter Fee Balance: ";
        cin >> feeBalance;
    }

    // Function to make fee payment
    void makePayment()
    {
        double payment;

        cout << "\nEnter Amount to Pay: ";
        cin >> payment;

        if (payment > 0 && payment <= feeBalance)
        {
            feeBalance = feeBalance - payment;

            cout << "Payment successful!" << endl;
        }
        else
        {
            cout << "Invalid payment amount!" << endl;
        }
    }

    // Function to display student status
    void displayStatus()
    {
        cout << "\n--- Student Fee Status ---" << endl;

        cout << "Student Name: " << studentName << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: KSh " << feeBalance << endl;
    }
};

int main()
{
    // Creating an object
    Student student1;

    // Input student details
    student1.inputStudent();

    // Process fee payment
    student1.makePayment();

    // Display updated fee status
    student1.displayStatus();

    return 0;
}