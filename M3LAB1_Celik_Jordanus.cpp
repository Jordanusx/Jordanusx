/*
CSC 134
M3LAB1 - If Statement Game
Jordanus Celik
3/2/2026
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "=== Mini Adventure Game ===" << endl;
    cout << endl;

    // Player starts with 100 health
    int health = 100;

    cout << "You encounter a wild dragon!" << endl;
    cout << "Your starting health is: " << health << endl;
    cout << endl;

    cout << "Do you choose to FIGHT or RUN?" << endl;
    cout << "Type 1 to FIGHT or 2 to RUN: ";

    int choice;
    cin >> choice;

    cout << endl;

    // Decision time
    if (choice == 1)
    {
        cout << "You chose to FIGHT!" << endl;
        cout << "The dragon breathes fire..." << endl;

        // Player takes damage
        health = health - 40;

        cout << "You defeated the dragon!" << endl;
        cout << "You lost 40 health." << endl;
    }
    else if (choice == 2)
    {
        cout << "You chose to RUN!" << endl;
        cout << "The dragon scratches you as you escape..." << endl;

        // Player takes smaller damage
        health = health - 15;

        cout << "You lost 15 health." << endl;
    }
    else
    {
        cout << "That is not a valid choice." << endl;
        cout << "The dragon attacks while you're confused..." << endl;

        // Big damage for invalid choice
        health = health - 100;

        cout << "You lost 100 health." << endl;
    }

    cout << endl;
    cout << "Your remaining health is: " << health << endl;

    // Check if player survived
    if (health > 0)
    {
        cout << "You survived the encounter!" << endl;
    }
    else
    {
        cout << "You have been defeated..." << endl;
    }

    cout << endl;
    cout << "Game Over. Thanks for playing!" << endl;

    return 0;
}