// File: count.cpp
// Purpose: Count to 10
// Author: Robert Lowe
#include <iostream>

using namespace std;

int main()
{
    int num;  //The number we are counting

    //start at zero
    num = 0;

    //count to 10
    while(num <= 10) {
        //display the number
        cout << num << endl;

        //go to the next number
        num = num + 1;
    }
}