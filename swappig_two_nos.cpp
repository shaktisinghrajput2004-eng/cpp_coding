#include <iostream>
using namespace std;

// Function to swap values using pointer dereferencing
void swapNumbers(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num1, num2;

    // Taking input from the user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "\n--- Before Swapping ---" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // We pass the memory addresses of num1 and num2
    swapNumbers(&num1, &num2);

    cout << "\n--- After Swapping ---" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}