#include <iostream>
using namespace std;

int main() {
    int number = 25;
    int *ptr = &number;

    cout << "Value of number: " << number << endl;
    cout << "Address of number: " << ptr << endl;
    cout << "Value using pointer: " << *ptr << endl;

    return 0;
}
