#include <iostream>
using namespace std;
class BankAccount {

    double balance;

public:

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " successfully." << endl;
        } else {
            cout << "Invalid deposit amount. Amount must be greater than 0." << endl;
        }
    }


    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn $" << amount << " successfully." << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount. Amount must be greater than 0." << endl;
        } else {
            cout << "Insufficient balance for withdrawal." << endl;
        }
    }

  
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;

    int choice;
    double amount;

    while (true) {
        cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the amount to deposit: $";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter the amount to withdraw: $";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                cout << "Account Balance: $" << account.getBalance() << endl;
                break;
            case 4:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    }

}
