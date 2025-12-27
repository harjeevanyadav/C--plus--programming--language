// Write a program to print the multiplication table of a given number.
#include <iostream>
using namespace std;

int main() {

int num;
cout<<"Enter number to print the multiplication table of a given number: ";
cin>>num;
 cout<<" <---------Print Table-------->"<<endl;
for (int i = 1; i <=10; i++)
{
    cout<<num<<"X"<<i<<"="<<i*num<<endl;
}

    return 0;
}