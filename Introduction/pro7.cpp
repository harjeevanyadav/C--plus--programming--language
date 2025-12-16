// Write a program to swap two numbers using a third variable.
#include <iostream>
using namespace std;
int main() {
     int firstNum, SecondNum;
     int temp=0;
     cout <<"<-------Before swap------>\t "<<endl;
     cout<<" Enter First Number :  ";
     cin>>firstNum;
     cout<<" Enter second Number :  ";
     cin>>SecondNum;
     temp=firstNum;
     firstNum=SecondNum;
     SecondNum=temp;
     cout <<"<-------After swap------>"<<endl;
     cout<<" Enter First Number :  "<<firstNum<<endl;
        cout<<" Enter second Number :  "<<SecondNum<<endl;

     return 0; 
}