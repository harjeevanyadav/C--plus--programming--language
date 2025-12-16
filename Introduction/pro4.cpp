// Write a program to add two integers entered by the user.
#include <iostream>
using namespace std;
int main()
{
    int x, y, sum = 0;
    cout << "Enter first integers (x) : " ;
    cin >> x;
    cout << "Enter second integers (y) : " ;
    cin >> y;
    sum = x + y;
    cout << "Addition of two integers(x+y) :" << sum << endl;
    return 0;
}