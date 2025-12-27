// 9.	Write a program to demonstrate logical operators (AND, OR, NOT). 
#include <iostream>
using namespace std;

int main() {
int a,b;
cout<<"Enter Number : ";
cin>>a>>b;
cout<<"a<b && a>b: "<<(a<b&&a>b)<<endl;
cout<<"a<b || a>b : "<<(a<b||a>b)<<endl;
cout<<"a!=b : "<<(a!=b)<<endl;
    return 0;
}