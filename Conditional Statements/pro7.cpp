// Program to reverse a given number
#include <iostream>
using namespace std;

int main() {
    int num, rev = 0;
    cout << "Enter a number to reverse: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;     // extract last digit
        rev = rev * 10 + digit;   // build reversed number
        num /= 10;                // remove last digit
    }

    cout << "Reversed number: " << rev << endl;
    return 0;
}
