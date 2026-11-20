#include <iostream>
using namespace std;

class Settings {
private:
    static Settings* instance;

    Settings() {
        cout << "Settings Object Created!" << endl;
    }

public:
    static Settings* getInstance() {
        if (instance == nullptr)
            instance = new Settings();

        return instance;
    }

    void display() {
        cout << "Welcome to Settings!" << endl;
    }
};

Settings* Settings::instance = nullptr;

int main() {
    Settings* s1 = Settings::getInstance();
    Settings* s2 = Settings::getInstance();

    s1->display();

    if (s1 == s2)
        cout << "Both objects are same." << endl;

    delete s1;

    return 0;
}