// 5.	Check if a given year is a leap year. 
#include <iostream>
using namespace std;

int main() {
 int years;
 cout<<"Enter Years to check  year is a leap year : ";
 cin>>years;
 if( (years%400==0)||(years%4==0 && years%100!=0))
 {
cout<<years<<" is a leap year.";
 }
 else{
   cout<<years<<" not is a leap year.";
 }

  return 0;
}