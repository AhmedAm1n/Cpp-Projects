/*
 * Project: Fahrenheit to Celsius Converter
 * Language: C++
 * Description: Converts a temperature from Fahrenheit to Celsius.
 * Concepts Used: Variables, user input, arithmetic operations, output
 */

#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    cout << fahrenheit << " Fahrenheit is equal to "
         << celsius << " Celsius." << endl;

    return 0;
}
