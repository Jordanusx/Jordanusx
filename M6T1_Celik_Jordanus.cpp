/*
CSC 134
M6T1 - Loops and Arrays
Jordanus Celik
4/27/2026
*/

#include <iostream>
#include <string>
using namespace std;

// Function Declarations
void method1();
void method2();

// main
int main() {
    cout << "=== Part 1 (No Array) ===" << endl;
    method1();

    cout << endl;

    cout << "=== Part 2 (Using Array + Chart) ===" << endl;
    method2();

    return 0;
}

// ==============================
// Part 1 - No array (while loop)
// ==============================
void method1() {
    const int SIZE = 5;

    int count = 0;
    int cars_today;
    int total = 0;
    double average = 0;

    cout << "Enter number of cars for each day (Mon–Fri)" << endl;

    while (count < SIZE) {
        cout << "Day " << count << ": ";
        cin >> cars_today;

        total += cars_today;
        count++;
    }

    average = (double) total / SIZE;

    cout << "Total cars = " << total << endl;
    cout << "Average per day = " << average << endl;
}

// =======================================
// Part 2 - Using array + ASCII bar chart
// =======================================
void method2() {
    const int SIZE = 5;

    string days[SIZE] = {"Mon", "Tue", "Wed", "Thu", "Fri"};
    int cars[SIZE];

    int total = 0;
    double average = 0;

    // Get input
    for (int i = 0; i < SIZE; i++) {
        cout << "Cars on " << days[i] << ": ";
        cin >> cars[i];
    }

    // Table output
    cout << "\nDay\tCars" << endl;
    cout << "----------------" << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << "\t" << cars[i] << endl;
        total += cars[i];
    }

    // Totals
    average = (double) total / SIZE;

    cout << "\nTotal cars = " << total << endl;
    cout << "Average per day = " << average << endl;

    // =========================
    // ASCII Bar Chart
    // =========================
    cout << "\nCar Count Chart" << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << ": ";

        // Print stars for each car (simple graph)
        for (int j = 0; j < cars[i]; j += 5) {
            cout << "*"; // each * = 5 cars (so it doesn't get huge)
        }

        cout << endl;
    }
}