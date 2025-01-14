#include <iostream>

using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    int choice;
    double temperature, converted;

    cout << "Temperature Converter" << endl;
    cout << "1. Convert Celsius to Fahrenheit" << endl;
    cout << "2. Convert Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        // Celsius to Fahrenheit conversion
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        converted = celsiusToFahrenheit(temperature);
        cout << "Temperature in Fahrenheit: " << converted << " F" << endl;
    } else if (choice == 2) {
        // Fahrenheit to Celsius conversion
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        converted = fahrenheitToCelsius(temperature);
        cout << "Temperature in Celsius: " << converted << " C" << endl;
    } else {
        // Invalid choice
        cout << "Invalid choice! Please run the program again." << endl;
    }

    return 0;
}
