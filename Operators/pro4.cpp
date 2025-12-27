//4.	Demonstrate relational operators with input values. 
#include <iostream>
using namespace std;

int main() {

int First_n,Second_n;
cout<<"Enter First Numbers : ";
cin>>First_n;
cout<<"Enter Second Numbers : ";
cin>>Second_n;
cout<<"<--------Answer shows in (0/1) form ---------->"<<endl;
cout<<"First Numbers==Second Numbers : "<<(First_n==Second_n)<<endl;
cout<<"First Numbers!=Second Numbers : "<<(First_n!=Second_n)<<endl;
cout<<"First Numbers>=Second Numbers : "<<(First_n>=Second_n)<<endl;
cout<<"First Numbers<=Second Numbers : "<<(First_n<=Second_n)<<endl;
cout<<"First Numbers<Second Numbers : "<<(First_n<Second_n)<<endl;
cout<<"First Numbers>Second Numbers : "<<(First_n>Second_n)<<endl;
    return 0;
}