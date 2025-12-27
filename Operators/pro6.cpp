//6.	Write a program for simple calculator (+, -, *, /). 
#include <iostream>
using namespace std;

int main() {
char ch;

int first_n,second_n;
cout<<"Enter 1st Numbers : ";
cin>>first_n;
cout<<"Enter 2nd Numbers : ";
cin>>second_n;
cout<<"Enter choice(+, -, *, /, %): ";
cin>>ch;
switch (ch)
{
case '+':
    cout<<"Addition : "<<(first_n+second_n)<<endl;
    break;
case '-':
    cout<<"Subtraction : "<<(first_n-second_n)<<endl;
    break;
    case '*':
    cout<<"Multiplication : "<<(first_n*second_n)<<endl;
    break;
    case '/':
    cout<<"Divide : "<<(first_n/second_n)<<endl;
    break;
    case '%':
    cout<<"Remainder : "<<(first_n%second_n)<<endl;
    break;
default:
cout<<"Wrong Chioce You Enter.";
    break;
}

cout<<" Thank You for Entering Number .";
    return 0;
}