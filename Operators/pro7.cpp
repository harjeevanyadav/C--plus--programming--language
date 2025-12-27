//7.	Demonstrate increment and decrement operators
#include <iostream>
using namespace std;

int main() {

int num;
cout<<"Enter Number : ";
cin>> num;
cout<<"Post-Increment of Number : "<< (num++) <<endl;
cout<<"Post-Decrement of Number : "<< (num--) <<endl;
cout<<"Pre-Increment of Number : "<< (++num) <<endl;
cout<<"Pre-Decrement of Number : "<< (--num) <<endl;
    return 0;
}