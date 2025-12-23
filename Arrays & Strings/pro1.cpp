// Write a program to input and display elements of an array.
#include <iostream>
using namespace std;

int main()
{
    int size_array;
    cout << "Enter size of elements:";
    cin >> size_array;
    int arr[size_array];
    cout << "Take input elements of an array:  ";
    for (int i = 0; i < size_array; i++)
    {
        cin >> arr[i];
    }
    cout << "Display elements of an array" << endl;

    for (int i = 0; i < size_array; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}