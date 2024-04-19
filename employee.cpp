#include <iostream>
#include <fstream>
using namespace std;

struct Employee {
    string name;
    int age;
    string position;
};

int main() {
    ofstream outFile("EmpData.txt", ios::app);
    if (!outFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    Employee emp;
    cout << "Enter employee name: ";
    getline(cin, emp.name);
    cout << "Enter employee age: ";
    cin >> emp.age;
    cout << "Enter employee position: ";
    cin.ignore();
    getline(cin, emp.position);

    outFile << "Name: " << emp.name << ", Age: " << emp.age << ", Position: " << emp.position << endl;
    cout << "Employee details written to file." << endl;

    outFile.close();
    return 0;
}
