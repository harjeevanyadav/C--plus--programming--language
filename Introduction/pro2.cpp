// Write a program to find the sum and average of two numbers.
// syntax of c++
#include <iostream>
using namespace std;
int main() 
{
    float x, y;
    float average=0;
    cout << "Enter first integers (x) : " ;
    cin >> x;
    cout << "Enter second integers (y) : " ;
    cin >> y;
     float sum = x + y;
    cout << "Addition of two integers(x+y) :" << sum << endl;
    average=sum/2;
cout << "Average of two number:" << average<< endl;
     return 0; 
}