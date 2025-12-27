// 2.	Write a program to check if a number is even or odd (using modulus operator). 
#include <iostream>
using namespace std;

int main() {

int num;
cout<<"Enter Number : ";
cin>>num;
if (num%2==0)
{
    cout<<num<<" Is a Even Number: "<<endl;

}else
{
    cout<<num<<" Is a Odd Number: "<<endl;
}




    return 0;
}