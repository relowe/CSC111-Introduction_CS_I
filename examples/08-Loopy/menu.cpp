//File: menu.cpp
//Purpose: Demonstrate a menu loop
//Author: Robert Lowe
#include <iostream>

using namespace std;

int main()
{
    int choice;

    //Run the menu
    do {
        cout << "1.) Option One" << endl
             << "2.) Option Two"<< endl
             << "3.) Exit" << endl
             << "Choice? ";
        cin >> choice;

        //do the selection
        if(choice == 1) {
            cout << "Option One" << endl;
        } else if(choice == 2) {
            cout << "Option Two" << endl;
        } else if(choice != 3) {
            cout << "Invalid selection, please try again." << endl;
        }
    } while(choice != 3);
}
