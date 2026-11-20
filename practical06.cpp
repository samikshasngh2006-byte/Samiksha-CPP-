#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual void area() = 0;
    virtual ~Shape() {}
};

// Circle class
class Circle : public Shape {
public:
    void area() {
        cout << "Circle Area: " << 3.14 * 5 * 5 << endl;
    }
};

// Rectangle class
class Rectangle : public Shape {
public:
    void area() {
        cout << "Rectangle Area: " << 10 * 5 << endl;
    }
};

// Triangle class
class Triangle : public Shape {
public:
    void area() {
        cout << "Triangle Area: " << 0.5 * 10 * 6 << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;
    Triangle t;

    Shape *s;

    s = &c;
    s->area();

    s = &r;
    s->area();

    s = &t;
    s->area();

    return 0;
}