//Write a program to calculate the area of a circle.(Use radius as input)
// syntax of c++
#include <iostream>
using namespace std;
int main() 
{
   double radious ,Area=0 ;  
   cout<<"Enter radius: "<<endl;   
   cin>>radious;
   Area=3.14*radious*radious;
    cout<<"Area of circle : "<<Area<<endl;   
     return 0; 
}