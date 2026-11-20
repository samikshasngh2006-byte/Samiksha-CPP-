#include <iostream>
#include <stack>
using namespace std;

template <class T>
class Stack {
    stack<T> s;

public:
    void push(T value) {
        s.push(value);
    }

    void pop() {
        if (!s.empty()) {
            cout << "Popped: " << s.top() << endl;
            s.pop();
        }
        else {
            cout << "Stack is Empty!" << endl;
        }
    }

    void display() {
        if (!s.empty())
            cout << "Top: " << s.top() << endl;
        else
            cout << "Stack is Empty!" << endl;
    }
};

int main() {
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    cout << "Integer Stack: ";
    s1.display();

    Stack<float> s2;
    s2.push(5.5);
    cout << "Float Stack: ";
    s2.display();

    Stack<string> s3;
    s3.push("Parth");
    cout << "String Stack: ";
    s3.display();

    s1.pop();

    Stack<int> s4;
    s4.pop();

    return 0;
}