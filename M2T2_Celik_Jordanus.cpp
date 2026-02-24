#include <iostream>
#include <iomanip>   // for setprecision and fixed

using namespace std;

int main()
{
    // Declare variables
    double mealPrice = 5.99;
    double taxPercent = 0.08;
    double taxAmount;
    double total;

    // Calculate the values
    taxAmount = mealPrice * taxPercent;
    total = mealPrice + taxAmount;

    // Print the results
    cout << fixed << setprecision(2);
    cout << "Meal Price: $" << mealPrice << endl;
    cout << "Tax (8%):   $" << taxAmount << endl;
    cout << "Total:      $" << total << endl;

    return 0;
}