//2.	Write a program to swap two numbers (without third variable). 
#include <iostream>
using namespace std;

int main() {
int a,b;
cout<<"Enter First  Number : ";
cin>>a;
cout<<"Enter Second Number : ";
cin>> b;
cout<<"<----- Before swaping----->"<<endl;
cout<<"Enter First  Number : "<<a<<endl;
cout<<"Enter Second  Number : "<<b<<endl;
cout<<"<----- Afther swaping----->"<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<"Enter First  Number : "<<a<<endl;
cout<<"Enter Second  Number : "<<b<<endl;

    return 0;
}