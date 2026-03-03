/*
CSC 134
M3T1 - Rectangle Areas
Jordanus Celik
3/2/2026
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "=== Rectangle Area Calculator ===" << endl;

    // -------- Rectangle 1 --------
    double length1, width1;

    cout << "Enter the length of Rectangle 1: ";
    cin >> length1;

    cout << "Enter the width of Rectangle 1: ";
    cin >> width1;

    double area1 = length1 * width1;


    // -------- Rectangle 2 --------
    double length2, width2;

    cout << "Enter the length of Rectangle 2: ";
    cin >> length2;

    cout << "Enter the width of Rectangle 2: ";
    cin >> width2;

    double area2 = length2 * width2;


    cout << endl;

    // Display results
    cout << fixed << setprecision(2);
    cout << "Area of Rectangle 1: " << area1 << endl;
    cout << "Area of Rectangle 2: " << area2 << endl;

    return 0;
}