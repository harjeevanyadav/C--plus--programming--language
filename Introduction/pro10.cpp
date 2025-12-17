// Write a program to convert temperature from Celsius to Fahrenheit.
#include <iostream>
using namespace std;
int main() {
    float celsius, fahrenheit;

    // Ask user for temperature in Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Display the result
    cout << celsius << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << endl;

    return 0;
}