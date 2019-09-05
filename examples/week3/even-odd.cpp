//File: even-odd.cpp
//Purpose: Determine if a number is even or odd
//Author: Robert Lowe
#include<iostream>

using namespace std;

int main()
{
    int num;  //the number to test

    //get the number
    cout << "Enter a number: ";
    cin >> num;

    //inform the user if it is even or odd 
    if( num % 2 == 0 ) {
        cout << "The number " << num << " is even" << endl;
    } else {
        cout << "The number " << num << " is odd" << endl;
    }
}
