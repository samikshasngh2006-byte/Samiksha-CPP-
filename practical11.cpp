#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Writing CSV file
    fstream file("students.csv", ios::out);

    if (!file) {
        cout << "File cannot be opened!";
        return 1;
    }

    file << "ID,Name,Marks\n";
    file << "1,Parth,86\n";
    file << "2,Samiksha,88\n";
    file << "3,Aoimkar,90\n";

    file.close();

    // Reading CSV file
    file.open("students.csv", ios::in);

    string line;
    cout << "Student Records:\n";

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();

    // File Position Functions
    file.open("students.csv", ios::in | ios::out);

    cout << "\nPosition Functions:\n";

    cout << "tellg(): " << file.tellg() << endl;
    file.seekg(0);
    cout << "seekg(): " << file.tellg() << endl;

    cout << "tellp(): " << file.tellp() << endl;
    file.seekp(0, ios::end);
    cout << "seekp(): " << file.tellp() << endl;

    file.close();

    return 0;
}