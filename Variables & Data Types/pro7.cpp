//7. Write a program to calculate compound interest. 
#include <iostream>
#include<cmath>
using namespace std;

int main() {
float p,t,r;
cout<<"Enter Principal : ";
cin>>p;
cout<<"Enter Rate(%) : ";
cin>>r;
cout<<"Enter Time(Years) : ";
cin>>t;
float Amount =p* pow((1+r/100),t);

cout<<"Principal Amount : "<<Amount<<endl;

float compound_interest =Amount-p;

cout<<"Compound Interest : "<<compound_interest<<endl;

    return 0;
}