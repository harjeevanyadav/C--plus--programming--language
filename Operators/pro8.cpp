//8.	Write a program to check if a number is divisible by 5 and 11. 
#include <iostream>
using namespace std;

int main() {

int num;
cout<<"Enter numbers to check if a number is divisible by 5 and 11 : "; 
cin>>num;
    if (num%5==0)
    {
        cout<<num<<" is divisible by 5.";
    }
    else
    {
        cout<<num<<" is divisible by 11.";
    } 
    
return 0;
}