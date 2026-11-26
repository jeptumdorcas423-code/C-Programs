#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    string student_name;
    int admission_number;
    double fee_balance;

public:

    // Function to input student details
    void inputStudentData() {
        cout << "Enter Student Name: ";
        getline(cin, student_name);

        cout << "Enter Admission Number: ";
        cin >> admission_number;

        cout << "Enter Fee Balance: ";
        cin >> fee_balance;
    }

    // Function to process fee payment
    void makePayment() {
        double payment;

        cout << "Enter Payment Amount: ";
        cin >> payment;

        if(payment > 0 && payment <= fee_balance) {
            fee_balance = fee_balance - payment;
            cout << "Payment made successfully!" << endl;
        }
        else {
            cout << "Invalid payment!" << endl;
        }
    }

    // Function to display student details
    void displayStatus() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Student Name: " << student_name << endl;
        cout << "Admission Number: " << admission_number << endl;
        cout << "Remaining Fee Balance: Ksh " << fee_balance << endl;
    }
};

int main() {
    Student s1;

    s1.inputStudentData();

    s1.makePayment();

    s1.displayStatus();

    return 0;
}