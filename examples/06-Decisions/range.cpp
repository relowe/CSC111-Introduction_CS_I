//File: range.cpp
//Purpose: Test for a range of values
//Author: Robert Lowe
#include <iostream>

using namespace std;

int main()
{
    int num;

    //get a number
    cout << "Enter a number" << endl;
    cin >> num;

    //test to see if it is between 1 and 5
    if(1 <= num <= 5) {
        cout << "The number is between 1 and 5" << endl;
    } else {
        cout << "The number is not between 1 and 5" << endl;
    }
}