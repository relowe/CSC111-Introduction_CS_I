// The soda machine simulator.  The best game you'll play this hour!
// Author: Robert Lowe and the CSC111 Students
#include <iostream>
#include <vector>
#include <string>
#include "soda-machine.h"

using namespace std;

int main()
{
    Soda_Machine machine;  //the machine
    int choice;            //the user's choice
    enum Menu_Choice { INSERT=1, CHANGE, 
                       BUTTON1, BUTTON2, BUTTON3, BUTTON4,
                       QUIT };

    do {
        //print the menu
        cout << endl;
        cout << "You see a soda machine before you." << endl
             << "  1.) Insert some money." << endl
             << "  2.) Pull the change return lever" << endl
             << "  3.) Press Button 1" << endl
             << "  4.) Press Button 2" << endl
             << "  5.) Press Button 3" << endl
             << "  6.) Press Button 4" << endl
             << "  7.) Walk Away" << endl
             << "What do you do? ";
        cin >> choice;
        cout << endl;

        //do the choice
        if(choice == INSERT) {
            //get the money and insert it into the machine
            double money;
            cout << "How much? ";
            cin >> money;

            machine.insert_money(money);
        } else if(choice == CHANGE) {
            //pull the change lever
            cout << "The machine gives you " << "$" << machine.change_return() << endl;
        } else if(choice >= BUTTON1 and choice <= BUTTON4) {
            //TODO push the button
            cout << "Button pushing is not yet implemented." << endl;
        } else if(choice == QUIT) {
            cout << "You walk away with your endocrine system (mostly) intact." << endl;
        } else {
            cout << "I don't know how to do that. Please try again" << endl;
        }
    } while(choice != QUIT);

    cout << "Thanks for playing!" << endl;
}
