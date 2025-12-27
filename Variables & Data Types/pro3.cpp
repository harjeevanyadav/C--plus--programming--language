//3.	Swap two numbers using a third variable. 
#include <iostream>
using namespace std;

int main() {
int a,b,temp=0;
cout<<"You Enter Number : "<<endl;
cout<<"Enter First  Number : ";
cin>>a;
cout<<"Enter Second Number : ";
cin>> b;
cout<<"<----- Before swaping----->"<<endl;
cout<<"Enter First  Number : "<<a<<endl;
cout<<"Enter Second  Number : "<<b<<endl;
cout<<"<----- Afther swaping----->"<<endl;
temp=a+b;
b=temp-b;
a=temp-b;
cout<<"Enter First  Number : "<<a<<endl;
cout<<"Enter Second  Number : "<<b<<endl;
    return 0;
}