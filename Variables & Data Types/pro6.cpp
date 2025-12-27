//6.	Convert given days into years, months, and days. 
#include <iostream>
using namespace std;

int main() {
    int years,months,days;
cout<<"Enter Days : ";
cin>>days;

years=days/365;
months=days/30;
days=days%365;
cout<<"Years : "<<years<<endl;
cout<<"months : "<<months<<endl;
cout<<"Days : "<<days<<endl;
    return 0;
}