/*
CSC 134
M5T1 - Basic Functions
Jordanus Celik
3/31/2026
*/

#include <iostream>
using namespace std;

// Function prototypes
void sayHello();
int doubleNumber(int num);

int main()
{
    cout << "Hello from main()" << endl;

    // Call the void function
    sayHello();

    // Call the value-returning function
    int number = 7;
    int doubled = doubleNumber(number);

    cout << "The doubled number is: " << doubled << endl;

    return 0;
}

// This function does not return a value
void sayHello()
{
    cout << "Hi from sayHello()" << endl;
}

// This function takes a number, doubles it, and returns it
int doubleNumber(int num)
{
    int result = num * 2;
    return result;
}