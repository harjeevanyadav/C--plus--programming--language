//3.	Find the largest of two numbers using ternary operator. 
#include <iostream>
using namespace std;

int main() {
int First_n,Second_n;
cout<<"Enter First Numbers : ";
cin>>First_n;
cout<<"Enter Second Numbers : ";
cin>>Second_n;
int largest_number=(First_n >Second_n)?First_n:Second_n;
cout<<"largest Number : "<<largest_number;
    return 0;
}