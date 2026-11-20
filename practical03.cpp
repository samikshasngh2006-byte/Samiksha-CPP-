
#include <iostream>
using namespace std;

class Array {
    int *data;

public:
    // Default constructor
    Array() {
        data = new int(0);
    }

    // Parameterized constructor
    Array(int n) {
        data = new int(n);
    }

    // Copy constructor (deep copy)
    Array(const Array &a) {
        data = new int(*a.data);
    }

    // Copy assignment operator
    Array& operator=(const Array &a) {
        if (this != &a)
            *data = *a.data;
        return *this;
    }

    // Move constructor
    Array(Array &&a) {
        data = a.data;
        a.data = nullptr;
    }

    // Move assignment operator
    Array& operator=(Array &&a) {
        if (this != &a) {
            delete data;
            data = a.data;
            a.data = nullptr;
        }
        return *this;
    }

    // Destructor
    ~Array() {
        delete data;
    }

    void display() {
        if (data)
            cout << *data << endl;
        else
            cout << "Empty" << endl;
    }
};

int main() {
    Array a1;          // Default
    Array a2(100);     // Parameterized
    Array a3(a2);      // Copy constructor
    Array a4;
    a4 = a2;           // Copy assignment
    Array a5(move(a2)); // Move constructor
    Array a6;
    a6 = move(a3);     // Move assignment

    cout << "Default: ";
    a1.display();

    cout << "Parameterized: ";
    a4.display();

    cout << "Copy: ";
    a6.display();

    cout << "Move: ";
    a5.display();

    return 0;
}
