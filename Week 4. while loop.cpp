#include <iostream>
using namespace std;

int main() {
    float balance, withdrawalAmount;

    cout << "Enter your account balance: ";
    cin >> balance;

    while (balance > 0) {
        cout << "\nEnter withdrawal amount: ";
        cin >> withdrawalAmount;

        if (withdrawalAmount > balance) {
            cout << "Insufficient balance!" << endl;
            break;
        }

        if (withdrawalAmount <= 0) {
            cout << "Enter a valid withdrawal amount!" << endl;
            continue;
        }

        balance = balance - withdrawalAmount;

        cout << "Remaining balance: " << balance << endl;

        if (balance == 0) {
            cout << "Your balance is zero. Transaction stopped." << endl;
            break;
        }
    }

    return 0;
}

