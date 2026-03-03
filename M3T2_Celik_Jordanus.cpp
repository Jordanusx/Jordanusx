/*
CSC 134
M3T2 - Random Numbers (Craps - First Pass)
Jordanus Celik
3/2/2026
*/

#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime>   // time()
using namespace std;

int main()
{
    cout << "=== Craps (First Pass) ===" << endl;
    cout << endl;

    // Seed the random number generator (so we don't get the same rolls every run)
    srand(time(0));

    // Roll two dice (random numbers 1 through 6)
    int die1 = (rand() % 6) + 1;
    int die2 = (rand() % 6) + 1;
    int total = die1 + die2;

    // Show what we rolled
    cout << "Die 1: " << die1 << endl;
    cout << "Die 2: " << die2 << endl;
    cout << "Total: " << total << endl;
    cout << endl;

    // First roll rules:
    // Win if 7 or 11
    // Lose if 2, 3, or 12
    // Otherwise, you get a "point" (we'll handle that later)
    if (total == 7 || total == 11)
    {
        cout << "You WIN on the first roll!" << endl;
    }
    else if (total == 2 || total == 3 || total == 12)
    {
        cout << "You LOSE on the first roll!" << endl;
    }
    else
    {
        cout << "Point established: " << total << endl;
        cout << "(We'll keep rolling for the point system later.)" << endl;
    }

    return 0;
}