#include <iostream>
#include <iomanip>

using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5/9 + 273.15;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9/5 + 32;
}

void convertTemperature(double value, char unit) {
    if (unit == 'C' || unit == 'c') {
        double fahrenheit = celsiusToFahrenheit(value);
        double kelvin = celsiusToKelvin(value);
        cout << fixed << setprecision(2);
        cout << value << "°C is " << fahrenheit << "°F and " << kelvin << "K" << endl;
    } else if (unit == 'F' || unit == 'f') {
        double celsius = fahrenheitToCelsius(value);
        double kelvin = fahrenheitToKelvin(value);
        cout << fixed << setprecision(2);
        cout << value << "°F is " << celsius << "°C and " << kelvin << "K" << endl;
    } else if (unit == 'K' || unit == 'k') {
        double celsius = kelvinToCelsius(value);
        double fahrenheit = kelvinToFahrenheit(value);
        cout << fixed << setprecision(2);
        cout << value << "K is " << celsius << "°C and " << fahrenheit << "°F" << endl;
    } else {
        cout << "Invalid unit of temperature entered." << endl;
    }
}

int main() {
    cout << "Temperature Converter" << endl;
    double tempValue;
    char tempUnit;

    cout << "Enter the temperature value: ";
    cin >> tempValue;

    cout << "Enter the unit of the temperature (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> tempUnit;

    convertTemperature(tempValue, tempUnit);

    return 0;
}
