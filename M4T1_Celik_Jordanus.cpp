// CSC 134
// M4T1 - While Loop
// Jordanus Celik
// 3/9/2026

#include <iostream>
using namespace std;

int main()
{

    // Part 1: say Hello five times
    int count = 1;

    while (count <= 5)
    {
        cout << "Hello number " << count << endl;
        count++;
    }

    cout << "That's all!" << endl;

    cout << endl;

    // Part 2: number and square table
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;

    int num = MIN_NUMBER;

    cout << "Number\tNumber Squared" << endl;
    cout << "----------------------" << endl;

    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num++;
    }

    return 0;
}