/*
CSC 134
M4HW - Times Table (Gold)
Jordanus Celik
3/2/2026
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "=== Times Table Program ===" << endl;
    cout << endl;

    int number = 0;

    // =========================
    // Part 3: Input validation loop
    // Keep asking until user enters 1–12
    // =========================
    while (number < 1 || number > 12)
    {
        cout << "Enter a number from 1 to 12: ";
        cin >> number;

        if (number < 1 || number > 12)
        {
            cout << "Invalid input. Try again." << endl;
        }
    }

    cout << endl;

    // =========================
    // Part 1 & 2: Times table loop
    // =========================
    int count = 1;

    while (count <= 12)
    {
        cout << number << " times " << count
             << " is " << (number * count) << "." << endl;

        count++; // don't forget this or infinite loop
    }

    return 0;
}