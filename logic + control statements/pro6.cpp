// Write a program to check whether a number is prime.
#include <iostream>
using namespace std;

int main() {
 int num ;
 cout<<"Enter Number to check a number is Prime : ";//take inputs
cin>>num;
if (num%2==1) //condition checking
{
    cout<<num<<" is Prime Number. "; //print output
}else{
    cout<<num<<" is Not Prime Number. ";//print output

}
    return 0;
}