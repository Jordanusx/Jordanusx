/*
CSC 134
M2HW1 - Gold
Jordanus Celik
3/2/2026
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
        // ================================
        // Question 1 - Banking Program
        // ================================

        cout << "=== Question 1: Banking Transactions ===" << endl;

        // Let the user type their full name (spaces included)
        cout << "Enter your name: ";
        string name;
        getline(cin, name);

        // Ask for starting balance
        cout << "Starting account balance ($): ";
        double startBalance;
        cin >> startBalance;

        // Ask for deposit amount
        cout << "Amount of deposit ($): ";
        double deposit;
        cin >> deposit;

        // Ask for withdrawal amount
        cout << "Amount of withdrawal ($): ";
        double withdrawal;
        cin >> withdrawal;

        // Create a random 8-digit account number
        srand(time(0));
        int accountNumber = 10000000 + rand() % 90000000;

        // Calculate final balance
        double finalBalance = startBalance + deposit - withdrawal;

        // Show results
        cout << endl;
        cout << "Name on the account: " << name << endl;
        cout << "Account number: " << accountNumber << endl;

        // Fixed precision makes sure money always shows 2 decimal places
        cout << fixed << setprecision(2);
        cout << "Final account balance: $" << finalBalance << endl;


        // ================================
        // Question 2 - General Crates
        // ================================

        cout << "\n=== Question 2: General Crates ===" << endl;

        // Updated numbers from management
        double costPerCubicFoot = 0.30;
        double chargePerCubicFoot = 0.52;

        // Get crate dimensions
        cout << "Enter crate length (feet): ";
        double length;
        cin >> length;

        cout << "Enter crate width (feet): ";
        double width;
        cin >> width;

        cout << "Enter crate height (feet): ";
        double height;
        cin >> height;

        // Calculate volume
        double volume = length * width * height;

        // Calculate cost, charge, and profit
        double cost = volume * costPerCubicFoot;
        double charge = volume * chargePerCubicFoot;
        double profit = charge - cost;

        // Show results (again using fixed precision for money formatting)
        cout << endl;
        cout << fixed << setprecision(2);
        cout << "Crate volume: " << volume << " cubic feet" << endl;
        cout << "Cost to build: $" << cost << endl;
        cout << "Customer price: $" << charge << endl;
        cout << "Profit: $" << profit << endl;


        // ================================
        // Question 3 - Pizza Party
        // ================================

        cout << "\n=== Question 3: Pizza Party ===" << endl;

        // Ask how many pizzas
        cout << "How many pizzas are you ordering? ";
        int pizzas;
        cin >> pizzas;

        // Ask how many slices per pizza
        cout << "How many slices per pizza? ";
        int slicesPerPizza;
        cin >> slicesPerPizza;

        // Ask how many visitors
        cout << "How many visitors are coming? ";
        int visitors;
        cin >> visitors;

        // Do the math
        int totalSlices = pizzas * slicesPerPizza;
        int neededSlices = visitors * 3;
        int leftover = totalSlices - neededSlices;

        // Show results
        cout << endl;
        cout << "Total slices: " << totalSlices << endl;
        cout << "Slices needed (3 per visitor): " << neededSlices << endl;

        // If we have extra pizza
        if (leftover >= 0)
        {
            cout << "Slices left over: " << leftover << endl;
        }
        else
        {
            cout << "Not enough pizza! You are short by " << (-leftover) << " slices." << endl;
        }


        // ================================
        // Question 4 - Cheering Program
        // ================================

    cout << "\n=== Question 4: Cheering Program ===" << endl;

    // Only using these string variables like the assignment says
    string letsGo, school, team, cheerOne, cheerTwo;

    letsGo = "Let's go ";
    school = "FTCC";
    team = "Trojans";

    // Build the cheers using concatenation (+)
    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;

    // Print the cheers
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

    return 0;
}