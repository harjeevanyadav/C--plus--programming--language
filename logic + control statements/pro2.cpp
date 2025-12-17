// Write a program to check whether a number is positive, negative, or zero.
#include <iostream>
using namespace std;

int main() {

    int num ;
    cout<<"Enter to check whether a number is positive, negative, or zero : ";
    cin>>num;
    if (num>0)
    {
        cout<<num<<" is Positive"<<endl;
    }else if(num<0)
    {
        cout<<num<<" is Negative"<<endl;
    }else{
        cout<<num<<" is Zero"<<endl;
    }
    return 0;
}