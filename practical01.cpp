#include <iostream>
using namespace std;

int main() {
    // Variables and data types
    int age;
    float marks;
    const float PI = 3.14;

    // User input
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    // Arithmetic operator
    float result = marks + 5;

    // Relational and logical operators
    cout << "\nAge: " << age << endl;
    cout << "Marks: " << marks << endl;
    cout << "Marks after adding 5: " << result << endl;

    cout << "PI Value: " << PI << endl;

    if (age >= 18 && marks >= 35)
        cout << "Eligible!" << endl;
    else
        cout << "Not Eligible!" << endl;

    return 0;
}