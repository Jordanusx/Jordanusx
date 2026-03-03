/*
CSC 134
M3LAB2 - Grade Converter
Jordanus Celik
3/2/2026
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "=== Numerical Grade to Letter Grade Converter ===" << endl;
    cout << endl;

    int grade;

    cout << "Enter your numerical grade: ";
    cin >> grade;

    cout << endl;

    // First check if the grade is invalid
    if (grade < 0 || grade > 100)
    {
        cout << "That is not a valid grade. Please enter a number between 0 and 100." << endl;
    }
    // Now we only check the LOWER bound
    else if (grade >= 90)
    {
        cout << "Your letter grade is: A" << endl;
    }
    else if (grade >= 80)
    {
        cout << "Your letter grade is: B" << endl;
    }
    else if (grade >= 70)
    {
        cout << "Your letter grade is: C" << endl;
    }
    else if (grade >= 60)
    {
        cout << "Your letter grade is: D" << endl;
    }
    else
    {
        cout << "Your letter grade is: F" << endl;
    }

    return 0;
}