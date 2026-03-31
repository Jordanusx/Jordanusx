/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Jordanus Celik
3/2/2026
*/

#include <iostream>
using namespace std;

// Function prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_treasure_room();
void choice_monster_room();

int main()
{
    cout << "Welcome to the Adventure Game!" << endl;
    cout << endl;

    main_menu();

    cout << endl;
    cout << "Thanks for playing!" << endl;

    return 0;
}

// This is the main menu
void main_menu()
{
    int choice = 0;

    // Keep asking until the user picks a valid option
    while (choice < 1 || choice > 4)
    {
        cout << "Choose what you want to do:" << endl;
        cout << "1. Go through the front door" << endl;
        cout << "2. Sneak around to the back door" << endl;
        cout << "3. Go home" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        if (choice == 1)
        {
            choice_front_door();
        }
        else if (choice == 2)
        {
            choice_back_door();
        }
        else if (choice == 3)
        {
            choice_go_home();
        }
        else if (choice == 4)
        {
            cout << "You decided to quit the game." << endl;
        }
        else
        {
            cout << "That is not a valid choice. Try again." << endl;
            cout << endl;
        }
    }
}

// Story branch 1
void choice_front_door()
{
    int choice = 0;

    cout << "You walk through the front door of the old castle." << endl;
    cout << "Inside, you see two paths." << endl;
    cout << "1. Go to the treasure room" << endl;
    cout << "2. Open the creepy side door" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << endl;

    if (choice == 1)
    {
        choice_treasure_room();
    }
    else if (choice == 2)
    {
        choice_monster_room();
    }
    else
    {
        cout << "You got confused and ran back outside." << endl;
    }
}

// Story branch 2
void choice_back_door()
{
    cout << "You sneak around to the back door." << endl;
    cout << "The door is unlocked, and you quietly step inside." << endl;
    cout << "You find a kitchen full of snacks." << endl;
    cout << "You grab some food and escape safely." << endl;
    cout << "Not a heroic ending, but still a win." << endl;
}

// Story branch 3
void choice_go_home()
{
    cout << "You decide this adventure is too dangerous." << endl;
    cout << "You go home, sit on the couch, and watch TV instead." << endl;
    cout << "Sometimes the safest choice is the best one." << endl;
}

// Extra branch 1
void choice_treasure_room()
{
    cout << "You enter the treasure room." << endl;
    cout << "Gold and jewels are everywhere!" << endl;
    cout << "You fill your pockets and become rich." << endl;
    cout << "Victory!" << endl;
}

// Extra branch 2
void choice_monster_room()
{
    cout << "You open the creepy side door..." << endl;
    cout << "A monster jumps out at you!" << endl;
    cout << "You try to run, but it's too late." << endl;
    cout << "Game Over!" << endl;
}