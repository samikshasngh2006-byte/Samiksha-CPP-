
#include <iostream>
#include <memory>
using namespace std;

int main() {

    // Unique Pointer: Single ownership
    unique_ptr<int> p1(new int(100));

    cout << "Unique Pointer: " << *p1 << endl;

    // Shared Pointer: Multiple ownership
    shared_ptr<int> p2(new int(200));
    shared_ptr<int> p3 = p2;

    cout << "Shared Pointer: " << *p2 << endl;
    cout << "Shared Count: " << p2.use_count() << endl;

    return 0;
}