/*
CSC 134
M5HW1 - Gold
Jordanus Celik
4/15/2026
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
void question1();
void question2();
void question3();
void question4();
void question5();

int main()
{
    int choice = 0;

    // Menu loop (Question 6)
    while (choice != 6)
    {
        cout << "\n=== M5HW1 Menu ===" << endl;
        cout << "1. Average Rainfall" << endl;
        cout << "2. Block Volume" << endl;
        cout << "3. Roman Numerals" << endl;
        cout << "4. Geometry Calculator" << endl;
        cout << "5. Distance Traveled" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) question1();
        else if (choice == 2) question2();
        else if (choice == 3) question3();
        else if (choice == 4) question4();
        else if (choice == 5) question5();
        else if (choice == 6) cout << "Exiting program..." << endl;
        else cout << "Invalid choice. Try again." << endl;
    }

    return 0;
}

// ================= Q1 =================
void question1()
{
    string m1, m2, m3;
    double r1, r2, r3;

    cout << "Enter month: ";
    cin >> m1;
    cout << "Enter rainfall for " << m1 << ": ";
    cin >> r1;

    cout << "Enter month: ";
    cin >> m2;
    cout << "Enter rainfall for " << m2 << ": ";
    cin >> r2;

    cout << "Enter month: ";
    cin >> m3;
    cout << "Enter rainfall for " << m3 << ": ";
    cin >> r3;

    double avg = (r1 + r2 + r3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << m1 << ", " << m2
         << ", and " << m3 << " is " << avg << " inches." << endl;
}

// ================= Q2 =================
void question2()
{
    double l, w, h;

    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;
    cout << "Enter height: ";
    cin >> h;

    if (l <= 0 || w <= 0 || h <= 0)
    {
        cout << "All values must be positive." << endl;
        return;
    }

    double volume = l * w * h;
    cout << "Volume: " << volume << endl;
}

// ================= Q3 =================
void question3()
{
    int num;
    cout << "Enter a number (1-10): ";
    cin >> num;

    if (num < 1 || num > 10)
    {
        cout << "Invalid number." << endl;
    }
    else if (num == 1) cout << "I" << endl;
    else if (num == 2) cout << "II" << endl;
    else if (num == 3) cout << "III" << endl;
    else if (num == 4) cout << "IV" << endl;
    else if (num == 5) cout << "V" << endl;
    else if (num == 6) cout << "VI" << endl;
    else if (num == 7) cout << "VII" << endl;
    else if (num == 8) cout << "VIII" << endl;
    else if (num == 9) cout << "IX" << endl;
    else if (num == 10) cout << "X" << endl;
}

// ================= Q4 =================
void question4()
{
    int choice;
    cout << "\nGeometry Calculator\n";
    cout << "1. Circle\n2. Rectangle\n3. Triangle\n4. Quit\n";
    cin >> choice;

    if (choice == 1)
    {
        double r;
        cout << "Enter radius: ";
        cin >> r;
        if (r < 0) cout << "Radius cannot be negative." << endl;
        else cout << "Area: " << 3.14159 * r * r << endl;
    }
    else if (choice == 2)
    {
        double l, w;
        cout << "Enter length and width: ";
        cin >> l >> w;
        if (l < 0 || w < 0) cout << "Invalid input." << endl;
        else cout << "Area: " << l * w << endl;
    }
    else if (choice == 3)
    {
        double b, h;
        cout << "Enter base and height: ";
        cin >> b >> h;
        if (b < 0 || h < 0) cout << "Invalid input." << endl;
        else cout << "Area: " << 0.5 * b * h << endl;
    }
    else if (choice == 4)
    {
        return;
    }
    else
    {
        cout << "Invalid menu choice." << endl;
    }
}

// ================= Q5 =================
void question5()
{
    int speed, time;

    cout << "Enter speed (mph): ";
    cin >> speed;
    cout << "Enter hours traveled: ";
    cin >> time;

    if (speed < 0 || time < 1)
    {
        cout << "Invalid input." << endl;
        return;
    }

    cout << "Hour\tDistance" << endl;
    cout << "----------------" << endl;

    for (int i = 1; i <= time; i++)
    {
        cout << i << "\t" << speed * i << endl;
    }
}