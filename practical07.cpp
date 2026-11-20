#include <iostream>
using namespace std;

// Function Overloading
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

// Complex Number Class
class Complex {
public:
    int real, imag;

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    // Operator Overloading
    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    cout << "Integer Addition: " << add(10, 20) << endl;
    cout << "Double Addition: " << add(2.5, 3.5) << endl;

    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;

    cout << "Complex Number 1: ";
    c1.display();

    cout << "Complex Number 2: ";
    c2.display();

    cout << "Addition: ";
    c3.display();

    return 0;
}