/*
CSC 134
M2T1
Celik Jordanus
1/9/26
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Store information
    string salesperson;
    int numApples;
    double pricePerApple;
    double totalPrice;

    // Get user input
    cout << "Enter salesperson name: ";
    getline(cin, salesperson);

    cout << "Enter number of apples: ";
    cin >> numApples;

    cout << "Enter price per apple: ";
    cin >> pricePerApple;

    // Calculate total price
    totalPrice = numApples * pricePerApple;

    // Display store information
    cout << "========================================" << endl;
    cout << "        " << salesperson << "'s Apple Stand" << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Number of Apples Available: " << numApples << endl;
    cout << "Price Per Apple: $" << fixed << setprecision(2) << pricePerApple << endl;
    cout << "Total Price for All Apples: $" << fixed << setprecision(2) << totalPrice << endl;
    cout << endl;
    cout << "========================================" << endl;

    return 0;
}
