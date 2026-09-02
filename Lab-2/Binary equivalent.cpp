Write a program to input a number, find its binary equivalent using arrays.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int binary[32]; // Array to store binary digits
    int index = 0;

    // Handle the special case of 0
    if (n == 0) {
        binary[index++] = 0;
    } else {
        // Convert to binary
        while (n > 0) {
            binary[index++] = n % 2;
            n /= 2;
        }
    }

    // Print the binary equivalent
    cout << "Binary equivalent: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
    cout << endl;

    return 0;
}
```