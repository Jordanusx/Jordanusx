/*
CSC 134
M2LAB1 - Crate Calculator
Jordanus Celik
3/2/2026
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "=== Crate Cost Calculator ===" << endl;

    // Ask for crate length
    cout << "Enter the crate length (feet): ";
    double length;
    cin >> length;

    // Ask for crate width
    cout << "Enter the crate width (feet): ";
    double width;
    cin >> width;

    // Ask for crate height
    cout << "Enter the crate height (feet): ";
    double height;
    cin >> height;

    // Calculate volume (length × width × height)
    double volume = length * width * height;

    // Use the given formulas
    double cost = volume * 0.23;
    double charge = volume * 0.50;
    double profit = charge - cost;

    cout << endl;

    // Display results
    cout << fixed << setprecision(2);
    cout << "Crate volume: " << volume << " cubic feet" << endl;

    // Fixed and setprecision keeps values at 2 decimal places
    cout << "Cost to build the crate: $" << cost << endl;
    cout << "Customer charge: $" << charge << endl;
    cout << "Profit made: $" << profit << endl;

    return 0;
}