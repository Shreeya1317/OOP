Write a program to read the following information from keyboard and display it:-
1>Employee name
2>Employee code
3>Employee designation
4>Employee age
5>Years of experience

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int code;
    string designation;
    int age;
    float experience;

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Employee Code: ";
    cin >> code;

    cin.ignore();

    cout << "Enter Employee Designation: ";
    getline(cin, designation);

    cout << "Enter Employee Age: ";
    cin >> age;

    cout << "Enter Years of Experience: ";
    cin >> experience;

    cout << "\n--- Employee Information ---\n";
    cout << "Name: " << name << "\n";
    cout << "Code: " << code << "\n";
    cout << "Designation: " << designation << "\n";
    cout << "Age: " << age << "\n";
    cout << "Experience: " << experience << " years\n";

    return 0;
}