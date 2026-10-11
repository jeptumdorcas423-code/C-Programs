#include <iostream>
using namespace std;

int main() {
    string employeeName;
    float basicSalary, bonus, totalSalary;

    for (int i = 1; i <= 5; i++) {
        cout << "\nEnter details for Employee " << i << endl;

        cout << "Enter employee name: ";
        cin >> employeeName;

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        bonus = 0.05 * basicSalary;

        totalSalary = basicSalary + bonus;

        cout << "\n--- Employee Salary Report ---" << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    return 0;
}

