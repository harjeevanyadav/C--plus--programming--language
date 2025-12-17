//Write a program to check whether a number is a palindrome.
#include <iostream>
using namespace std;
int main()
{
    int n ; // Input number
    cout<<"Enter Number: ";
    cin>>n;
    int original = n, reversed = 0;
    while (n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    if (original == reversed)
        cout << "Palindrome.";
    else
        cout << "Not Palindrome.";
    return 0;
}
