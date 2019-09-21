//File: menu.cpp
//Purpose: Demonstrate a menu loop
//Author: Robert Lowe
#include <iostream>

using namespace std;

int main()
{
    enum menu_choice { ONE=1, TWO, EXIT };
    int choice;

    //Run the menu
    do {
        cout << "1.) Option One" << endl
             << "2.) Option Two"<< endl
             << "3.) Exit" << endl
             << "Choice? ";
        cin >> choice;

        //do the selection
        if(choice == ONE) {
            cout << "Option One" << endl;
        } else if(choice == TWO) {
            cout << "Option Two" << endl;
        } else if(choice != EXIT) {
            cout << "Invalid selection, please try again." << endl;
        }
    } while(choice != EXIT);
}
