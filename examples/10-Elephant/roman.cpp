#include <iostream>

using namespace std;

//Print the roman numeral for the given value.
//This function can print values for 1,4,5,9,and 10
//All other values print "invalid"
void print_roman_numeral(int value) 
{
    if(value == 1) {
        cout << "I";
    } else if(value == 4) {
        cout << "IV";
    } else if(value == 5) {
        cout << "V";
    } else if(value == 9) {
        cout << "IX";
    } else if(value == 10) {
        cout << "X";
    } else {
        cout << "Invalid";
    }
}


int main()
{
    int x;

    //get the number
    cout << "Enter a number: ";
    cin >> x;

    //print it as a roman numeral
    print_roman_numeral(x);
    cout << endl;
}
