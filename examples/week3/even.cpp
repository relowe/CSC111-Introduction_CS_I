//File: even.cpp
//Purpose: Determine if a number is even
//Author: Robert Lowe
#include<iostream>

using namespace std;

int main()
{
    int num;  //the number to test

    //get the number
    cout << "Enter a number: ";
    cin >> num;

    //inform the user if it is even
    if( num % 2 == 0 ) {
        cout << "The number " << num << " is even" << endl;
    }
}
