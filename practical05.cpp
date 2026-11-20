
#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
        name = n;
        age = a;
    }
};

// Derived class
class Student : public Person {
public:
    int rollNo;

    Student(string n, int a, int r) : Person(n, a) {
        rollNo = r;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

// Multilevel derived class
class GraduateStudent : public Student {
public:
    string topic;

    GraduateStudent(string n, int a, int r, string t)
        : Student(n, a, r) {
        topic = t;
    }

    void displayGraduate() {
        display();
        cout << "Research Topic: " << topic << endl;
    }
};

int main() {
    Student s("Parth", 20, 101);
    GraduateStudent g("Samiksha", 22, 102, "Artificial Intelligence");

    cout << "Student Details:" << endl;
    s.display();

    cout << "\nGraduate Student Details:" << endl;
    g.displayGraduate();

    return 0;
}
