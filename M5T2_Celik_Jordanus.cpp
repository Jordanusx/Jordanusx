/*
CSC 134
M5T2 - More Practice with Functions
Jordanus Celik
3/18/2026
*/

#include <iostream>
using namespace std;

// Function prototypes
int square(int num);                 // returns a value
void printAnswerLine(int num);      // prints one line

int main()
{
    cout << "Number\tSquare" << endl;
    cout << "----------------" << endl;

    int count = 1;

    // Loop from 1 to 10
    while (count <= 10)
    {
        printAnswerLine(count);
        count++;
    }

    return 0;
}

// ============================
// Function that returns square
// ============================
int square(int num)
{
    return num * num;
}

// ============================
// Function that prints one row
// ============================
void printAnswerLine(int num)
{
    int result = square(num);  // call the other function

    cout << num << "\t" << result << endl;
}