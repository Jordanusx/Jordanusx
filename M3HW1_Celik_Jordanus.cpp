/*
CSC 134
M3HW1 - Gold
Jordanus Celik
3/2/2026
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    srand(time(0));

    // =========================
    // Question 1 - Simple Chat Bot
    // =========================
    cout << "Question 1" << endl;
    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;

    string answer1;
    cin >> answer1;

    if (answer1 == "yes")
    {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (answer1 == "no")
    {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else
    {
        cout << "If you're not sure... that's OK." << endl;
    }

    cout << endl;


    // =========================
    // Question 2 - Receipt Calculator
    // =========================
    cout << "Question 2" << endl;

    double mealPrice = 0;
    double taxRate = 0.08;
    double tipRate = 0.15;
    double taxAmount = 0;
    double tipAmount = 0;
    double totalAmount = 0;
    int orderType = 0;

    cout << "Enter the price of the meal: $";
    cin >> mealPrice;

    cout << "Enter 1 for dine in, or 2 for takeaway: ";
    cin >> orderType;

    taxAmount = mealPrice * taxRate;

    if (orderType == 1)
    {
        tipAmount = mealPrice * tipRate;
    }
    else
    {
        tipAmount = 0;
    }

    totalAmount = mealPrice + taxAmount + tipAmount;

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Receipt" << endl;
    cout << "Meal:  $" << mealPrice << endl;
    cout << "Tax:   $" << taxAmount << endl;
    cout << "Tip:   $" << tipAmount << endl;
    cout << "Total: $" << totalAmount << endl;

    cout << endl;


    // =========================
    // Question 3 - Choose Your Own Adventure
    // =========================
    cout << "Question 3" << endl;
    cout << "You are exploring a dark cave." << endl;
    cout << "Do you go left or right?" << endl;

    string choice1;
    cin >> choice1;

    if (choice1 == "left")
    {
        cout << "You walk into a trap room." << endl;
        cout << "Game Over!" << endl;
    }
    else if (choice1 == "right")
    {
        cout << "You find a sleeping dragon." << endl;
        cout << "Do you sneak or attack?" << endl;

        string choice2;
        cin >> choice2;

        if (choice2 == "attack")
        {
            cout << "The dragon wakes up and defeats you." << endl;
            cout << "Defeat!" << endl;
        }
        else if (choice2 == "sneak")
        {
            cout << "You sneak past the dragon and find the treasure!" << endl;
            cout << "Victory!" << endl;
        }
        else
        {
            cout << "That wasn't a good choice. The dragon notices you." << endl;
            cout << "Defeat!" << endl;
        }
    }
    else
    {
        cout << "You stand still too long and the cave collapses." << endl;
        cout << "Game Over!" << endl;
    }

    cout << endl;


    // =========================
    // Question 4 - Math Practice
    // =========================
    cout << "Question 4" << endl;

    int num1 = rand() % 10;
    int num2 = rand() % 10;
    int userAnswer = 0;
    int correctAnswer = 0;

    correctAnswer = num1 + num2;

    cout << "What is " << num1 << " plus " << num2 << "?" << endl;
    cin >> userAnswer;

    if (userAnswer == correctAnswer)
    {
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Incorrect." << endl;
    }

    return 0;
}