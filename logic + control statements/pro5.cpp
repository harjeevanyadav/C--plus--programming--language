// Write a program to find the factorial of a number using a loop.
#include <iostream>
using namespace std;

int main() {
 double num,fact=1;
    cout<<"Enter number to find the factorial: ";
    cin>>num;
    for (int i = 1; i <=num; i++)
    {
       fact=fact*i;
    }
    cout<<"The factorial of  "<<num<<" is : "<<fact;

    return 0;
}