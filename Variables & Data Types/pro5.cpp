//5.	Convert temperature from Celsius to Fahrenheit. 
#include <iostream>
using namespace std;

int main() {
    float celsius,Fahrenheit;
    cout<<"Enter You celsius : ";
    cin>>celsius;
    Fahrenheit=(9/5*celsius)+32;
    cout<<"Show Result in Fahrenheit : "<<Fahrenheit<<" F"<<endl;
    return 0;
}