// Write a program to find the sum and average of array elements.
// Write a program to input and display elements of an array.
#include <iostream>
using namespace std;

int main()
{
    int size_array;
    cout << "Enter size of elements:";
    cin >> size_array;
    int arr[size_array];
    cout << "Take input elements of an first array:  ";
    for (int i = 0; i < size_array; i++)
    {
        cin >> arr[i];
    }

    int size_Array;
    cout << "Enter size of elements:";
    cin >> size_Array;
    int Arr[size_Array];
    cout << "Take input elements of an Second array:  ";
    for (int j = 0; j< size_Array; j++)
    {
        cin >> Arr[j];
    }

    

return 0;
}
