// ToDo: Write a program that switch Fahrenheit to Celcius

#include <iostream>

using namespace std;

int main () {
    cout << "Insert a value Degree of Fahrenheit to switch them into Celcius: ";
    double Value;
    cin >> Value;
    cout << "The " << Value << "*F is... " << (Value - 32) / 1.8 << "*C";
}
