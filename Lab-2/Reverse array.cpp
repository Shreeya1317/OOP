Write a program to input an array of n elements, copy the reverse of the array into another array.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int reversed[n];
    for (int i = 0; i < n; i++) {
        reversed[i] = arr[n - 1 - i];
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << reversed[i] << " ";
    }
    cout << endl;

    return 0;
}