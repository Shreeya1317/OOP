Write a program to input a number and check whether its armstrong number or not.(153 is an Armstrong number since 1^3 + 5^3 + 3^3 = 153.)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, originalNumber, remainder, sum = 0;
    cout << "Enter a number: ";
    cin >> number;
    originalNumber = number;

    while (number != 0) {
        remainder = number % 10;
        sum += pow(remainder, 3);
        number /= 10;
    }

    if (sum == originalNumber) {
        cout << originalNumber << " is an Armstrong number." << endl;
    } else {
        cout << originalNumber << " is not an Armstrong number." << endl;
    }

    return 0;
}
```