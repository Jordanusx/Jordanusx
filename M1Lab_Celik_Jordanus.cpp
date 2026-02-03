/*
CSC 134 
M1Lab
Celik Jordanus
1/2/26
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Store information
    string salesperson = "Jane Smith";
    int numApples = 100;
    double pricePerApple = 0.25;
    double totalPrice = numApples * pricePerApple;
    
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