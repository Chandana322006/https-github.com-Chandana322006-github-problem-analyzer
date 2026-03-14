#include <iostream>
using namespace std;

int main() {
    int numbers[5]; // Declare an array of size 5

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i]; // Input array elements
    }

    cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] <<endl; // Output array elements
    }

    return 0;
}

