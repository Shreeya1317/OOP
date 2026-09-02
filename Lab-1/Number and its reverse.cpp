Write a program to input  number to fine its reverse using do while.
#include <iostream>
using namespace std;

int main() {
    int number, reverse = 0;
    cout << "Enter a number: ";
    cin >> number;

    do {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    } while (number != 0);

    cout << "Reverse = " << reverse << endl;

    return 0;
}
