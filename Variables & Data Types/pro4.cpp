//4.	Find the area and perimeter of a rectangle. 
#include <iostream>
using namespace std;

int main() {
int l,b;
cout<<"Enter Lenght: ";
cin>>l;
cout<<"Enter Breadht: ";
cin>>b;
int Area_of_rectangle=l*b;
cout<<"Area Of Rectangle : "<<Area_of_rectangle<<endl;
int perimeter_of_rectangle= 2*(l+b);
cout<<"Perimeter Of Rectangle : "<<perimeter_of_rectangle<<endl;
    return 0;
}