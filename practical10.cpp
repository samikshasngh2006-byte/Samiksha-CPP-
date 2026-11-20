#include <iostream>
#include <exception>
using namespace std;

// Custom Exceptions
class InvalidAmount : public exception {};
class InsufficientFunds : public exception {};

class BankAccount {
    float balance;

public:
    BankAccount(float b) {
        balance = b;
    }

    void withdraw(float amount) {
        if (amount <= 0)
            throw InvalidAmount();

        if (amount > balance)
            throw InsufficientFunds();

        balance -= amount;
        cout << "Withdrawal Successful!" << endl;
        cout << "Remaining Balance: Rs. " << balance << endl;
    }
};

int main() {
    BankAccount b(5000);

    try {
        b.withdraw(1000);
        b.withdraw(-500);
    }
    catch (InvalidAmount&) {
        cout << "Error: Invalid Amount!" << endl;
    }
    catch (InsufficientFunds&) {
        cout << "Error: Insufficient Balance!" << endl;
    }

    try {
        b.withdraw(6000);
    }
    catch (InvalidAmount&) {
        cout << "Error: Invalid Amount!" << endl;
    }
    catch (InsufficientFunds&) {
        cout << "Error: Insufficient Balance!" << endl;
    }

    return 0;
}