// Kristoffer Carlino
// C++ 310
// Dr. Robert Flowers
// M9 Discussion Inheritance Debugging of Classmate's Code Fix
// This program demonstrates base classes, child classes, and inheritance.

#include <iostream>
#include <iomanip>
using namespace std;

// Base Class: Account
class Account {
protected:
    int accountNumber;
    double balance;

public:
    Account(int accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }

    virtual void checkBalance() {
        cout << fixed << setprecision(2);
        cout << "Account #" << accountNumber << " Balance: $" << balance << endl;
    }

    int getAccountNumber() { return accountNumber; }
    double getBalance() { return balance; }
};

// Child Class 1: CheckingAccount
class CheckingAccount : public Account {
public:
    CheckingAccount(int accNum, double bal) : Account(accNum, bal) {}

    void checkBalance() override {
        cout << fixed << setprecision(2);
        cout << "CHECKING Account #" << accountNumber << " Balance: $" << balance << endl;
    }
};

// Child Class 2: SavingsAccount
class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(int accNum, double bal) : Account(accNum, bal) {}

    void checkBalance() override {
        cout << fixed << setprecision(2);
        cout << "SAVINGS Account #" << accountNumber << " Balance: $" << balance << endl;
    }
};

int main() {
    cout << "=== SIMPLE ACCOUNT BALANCE ===" << endl;

    CheckingAccount checking(1001, 250.75);
    SavingsAccount savings(2001, 1500.50);

    cout << "\n--- Checking Balance ---" << endl;
    checking.checkBalance();

    cout << "\n--- Savings Balance ---" << endl;
    savings.checkBalance();

    return 0;
}
