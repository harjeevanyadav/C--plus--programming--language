// Write a program to find the ASCII value of a character.
#include <iostream>
using namespace std;
int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;
    // int asciiValue = static_cast<int>(character);
    int ascii_Value = (int)character;
    
    cout << "The ASCII value of '" << character << "' is " << asciiValue << endl;

    return 0;
}