/*
CSC 134
M6HW1 - Project Prototype (Gold)
Jordanus Celik
4/27/2026
*/

#include <iostream>
using namespace std;

// Function prototypes
void entrance();
void hallway();
void storageRoom();
void controlRoom();
void exitDoor();

int main()
{
    cout << "=== Escape the Construction Site ===" << endl;
    cout << endl;

    cout << "You are trapped inside a construction site after closing time." << endl;
    cout << "A sign says: Find the keycard to unlock the exit gate." << endl;
    cout << endl;

    entrance();

    cout << endl;
    cout << "Thanks for playing!" << endl;

    return 0;
}

// Starting room
void entrance()
{
    int choice = 0;

    cout << "\nYou are at the entrance area." << endl;
    cout << "1. Go to the hallway" << endl;
    cout << "2. Check the locked exit gate" << endl;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1)
    {
        hallway();
    }
    else if (choice == 2)
    {
        exitDoor();
    }
    else
    {
        cout << "Invalid choice. Try again." << endl;
        entrance();
    }
}

// Main room with choices
void hallway()
{
    int choice = 0;

    cout << "\nYou walk into the main hallway." << endl;
    cout << "An old security guard on the radio says:" << endl;
    cout << "\"If you want out, check the storage room. Workers leave stuff everywhere.\"" << endl;
    cout << endl;

    cout << "1. Go to the storage room" << endl;
    cout << "2. Go to the control room" << endl;
    cout << "3. Go back to the entrance" << endl;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1)
    {
        storageRoom();
    }
    else if (choice == 2)
    {
        controlRoom();
    }
    else if (choice == 3)
    {
        entrance();
    }
    else
    {
        cout << "Invalid choice. Try again." << endl;
        hallway();
    }
}

// Item pickup room
void storageRoom()
{
    int choice = 0;

    cout << "\nYou enter the storage room." << endl;
    cout << "You see tools, boxes, and a shiny keycard on a shelf." << endl;
    cout << "1. Pick up the keycard" << endl;
    cout << "2. Leave it and go back" << endl;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "You picked up the keycard." << endl;
        cout << "Now you should try the exit gate." << endl;
        exitDoor();
    }
    else if (choice == 2)
    {
        cout << "You leave the keycard behind." << endl;
        hallway();
    }
    else
    {
        cout << "Invalid choice. Try again." << endl;
        storageRoom();
    }
}

// Extra room / decision point
void controlRoom()
{
    int choice = 0;

    cout << "\nYou enter the control room." << endl;
    cout << "A monitor flashes: EXIT GATE REQUIRES KEYCARD." << endl;
    cout << "This confirms what you need to escape." << endl;
    cout << endl;

    cout << "1. Go to the storage room" << endl;
    cout << "2. Go back to hallway" << endl;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1)
    {
        storageRoom();
    }
    else if (choice == 2)
    {
        hallway();
    }
    else
    {
        cout << "Invalid choice. Try again." << endl;
        controlRoom();
    }
}

// Ending room
void exitDoor()
{
    int choice = 0;

    cout << "\nYou stand at the locked exit gate." << endl;
    cout << "Do you have the keycard?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "\nYou swipe the keycard." << endl;
        cout << "The gate unlocks with a loud beep." << endl;
        cout << "You escape the construction site!" << endl;
        cout << "Victory!" << endl;
    }
    else if (choice == 2)
    {
        cout << "The gate stays locked." << endl;
        cout << "You need to find the keycard first." << endl;
        hallway();
    }
    else
    {
        cout << "Invalid choice. Try again." << endl;
        exitDoor();
    }
}