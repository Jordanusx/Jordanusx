/*
CSC 134
M5LAB2 - Complete a Program
Jordanus Celik
3/31/2026
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    double length = 0;
    double width = 0;
    double area = 0;

    // Get input
    length = getLength();
    width = getWidth();

    // Calculate area
    area = getArea(length, width);

    // Display results
    displayData(length, width, area);

    return 0;
}

// ============================
// Get length from user
// ============================
double getLength()
{
    double length;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    return length;
}

// ============================
// Get width from user
// ============================
double getWidth()
{
    double width;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    return width;
}

// ============================
// Calculate area
// ============================
double getArea(double length, double width)
{
    double area = length * width;
    return area;
}

// ============================
// Display results nicely
// ============================
void displayData(double length, double width, double area)
{
    cout << endl;
    cout << fixed << setprecision(2);

    cout << "=== Rectangle Data ===" << endl;
    cout << "Length: " << length << endl;
    cout << "Width:  " << width << endl;
    cout << "Area:   " << area << endl;
}