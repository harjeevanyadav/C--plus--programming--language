//Write a program to calculate simple interest using user input.
#include <iostream>
using namespace std;

int main() {

int principal,rate,time;
cout<<"Enter principle : ";
cin>>principal;
cout<<"Enter Time(year) : ";
cin>>time;
cout<<"Enter Rate: ";
cin>>rate;
double simple_interest=(principal*rate*time)/100;
cout<<"Simple interest : " <<simple_interest;
    return 0;
}