#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0, j = str.length() - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}
