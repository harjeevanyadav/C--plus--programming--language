//Write a program to check whether a number is even or odd.
#include<iostream>
using namespace std;
int makin ()
{
   int num;
   cout<<"Enter Number to check whether a number is even or odd : ";
   cin>>num;
   if (num/2==0){
    cout<<num<<"is even ";
   }else{
    cout<<num<<"is Odd ";
   }
return 0;
}