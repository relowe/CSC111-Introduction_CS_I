// Class definition of a Soda Machine class.
// Author: Robert Lowe
#ifndef SODA_H
#define SODA_H
#include <vector>
#include <string>

class Soda_Machine
{
public:
    //constructor
    Soda_Machine();

    //deposit money into the machine
    void insert_money(double amount);

    //pull the change return, returning the deposited change
    double change_return();

    //push a button, the retun value is any message the machine gives
    //in response
    std::string push_button(int button);

private:
    std::vector<std::string> brand; //brands for the buttons
    std::vector<double> price;      //prices of each soda
    std::vector<int> quantity;      //the quantity of each soda
    double deposit;
    double vault;

    //dispenese a soda
    void vend(int slot);
};
#endif
