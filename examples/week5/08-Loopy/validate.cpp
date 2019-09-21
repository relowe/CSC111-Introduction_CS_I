//File: validate.cpp
//Purpose: Demonstrate an input validation loop
//author::: Robert Lowe

#include <iostream>
using namespace std;


int main()
{
    int x;       //the number to be validated.
    bool valid;  //whether the choice is valid

    //get a valid choice
    cout << "Enter a number between 1 and 5." << endl;
    do {
        //get a number
        cout << "number: ";
        cin >> x;

        //check validity
        valid = x>=1 and x<=5;

        //report errors
        if(not valid) {
            cout << "Invalid selection.  Please try again." << endl;
        }
    } while(not valid);

    cout << "Thank You" << endl;
}
