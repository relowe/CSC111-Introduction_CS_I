// Implementation of the soda machine class.
// Author: Robert Lowe and the CSC111 Students
#include <vector>
#include <string>
#include "soda-machine.h"

using namespace std;

//constructor
Soda_Machine::Soda_Machine()
{
    //load up the first slot
    brand.push_back("Dr. Fizz");
    price.push_back(1.25);
    quantity.push_back(10);

    //load up the second slot
    brand.push_back("7-Out");
    price.push_back(1.25);
    quantity.push_back(10);

    //load up the third slot
    brand.push_back("Aqua Furtum");
    price.push_back(0.85);
    quantity.push_back(10);


    //load up the fourth slot
    brand.push_back("Sathrodous");
    price.push_back(1.25);
    quantity.push_back(10);

    //initialize the money
    deposit = 0.0;
    vault = 0.0;
}


//deposit money into the machine
void Soda_Machine::insert_money(double amount)
{
    deposit += amount;
}


//pull the change return, returning the deposited change
double Soda_Machine::change_return()
{
    //make change and clear the deposition
    double change = deposit;
    deposit = 0.0;

    return change;
}
