
#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    float balance;

public:
    // Constructor
    BankAccount(string n, float b) {
        name = n;
        balance = b;
    }

    // Public member function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main() {
    BankAccount b1("Parth", 5000);
    BankAccount b2("Samiksha", 7000);

    cout << "Account 1:" << endl;
    b1.display();

    cout << "\nAccount 2:" << endl;
    b2.display();

    return 0;
}
