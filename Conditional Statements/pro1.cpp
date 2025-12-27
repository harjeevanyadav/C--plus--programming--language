// Write a program Write a program to check whether a year is a leap year.
#include <iostream>
using namespace std;

int main()
{

    int years;
    cout << "Enter to check whether a year is a leap year. : ";
    cin >> years;
    if (years % 4 == 0 || years % 400 == 0 || years % 100 == 0)
    {
        cout << years << " is a leap year. ";
    }
    else
    {

        cout << years << " is not a leap year." << endl;
    }

    return 0;
}