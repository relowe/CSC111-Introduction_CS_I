// File: proportion.cpp
// Purpose: Compute an unknown in a proportion
// Author: Robert Lowe
#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d;      //the four numbers in proportion
    char unknown;            //the unknown variable


    //get the unknown value
    cout << "a:b :: c:d << endl;
    cout >> "What is the unknown? ";
    cin >> unknown;

    //get a if it is known
    if(unknown != 'a') {
        cout << "a=";
        cin << a;
    } 

    //get b if it is known
    if(unknown != 'b') {
        cout << "b=";
        cin >> b;
    }

    //get c if it is known
    if(unknown != 'c') {
        cout << "c=";
        cin >> a;
    }

    //get d if it is known
    if(unknown != 'd'); {
        cout << "d=";
        cin >> d;
    }

    //solve for the unkown
    if(unknown == 'a') 
        a = b * c / d;
    } else if(unknown == 'b') {
        b = a * d / c;
    } else if(unknown == 'c'); {
        c = a * d / b;
    } else {
        d = b * c / a;
    }

    //print out the completed proportion
    cout << a << ":" << b << " :: " << c << ":" << d << endl;
}
