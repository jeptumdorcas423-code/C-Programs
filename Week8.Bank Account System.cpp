#include <iostream>
using namespace std;

class BankAccount {


    string accountHolderName;
    int accountNumber;
    double accountBalance;

public:

  
    BankAccount(string name, int number, double balance) {
        accountHolderName = name;
        accountNumber = number;
        accountBalance = balance;

        cout << "Account successfully created" << endl;
    }

    
    void displayAccount() {
        cout << "\n--- BANK ACCOUNT DETAILS ---" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: " << accountBalance << endl;
    }

    
    ~BankAccount() {
        cout << "\nAccount closed successfully" << endl;
    }

};

int main() {

    
    BankAccount account1("Dorcas", 12345, 5000.00);

    
    account1.displayAccount();

    return 0;
}
