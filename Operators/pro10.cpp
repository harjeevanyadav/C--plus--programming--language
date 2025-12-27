// 10.	Write a program to calculate remainder without using modulus operator. 
#include <iostream>
using namespace std;

int main() {
    int dividend, divisor, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;              // integer division
    remainder = dividend - (quotient * divisor); // remainder without %

    cout << "Remainder = " << remainder << endl;

    return 0;
}
