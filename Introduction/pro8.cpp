// Write a program to find the largest of two numbers.
#include<iostream>
using namespace std;
int main()
{
   int num1, num2;
   cout<<"Enter two numbers to find the largest: ";
   cin>>num1>>num2;
   if (num1 > num2){
    cout<<num1<<" is the largest number.";
   }else if (num2 > num1){
    cout<<num2<<" is the largest number.";
   }else{
    cout<<"Both numbers are equal.";
   }
   return 0;
}