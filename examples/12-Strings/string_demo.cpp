//demonstrate some things about strings
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //declare a string
    string str = "Hello, World";


    //display the string
    cout << "The string is: " << str << endl;

    //display the length of the string
    cout << "The string is " << str.length() << " characters long." << endl;

    //Loop over each character in the string
    for(int i=0; i<str.length(); i++) {
        cout << i << ": " << str[i] << endl;
    }

    //String Concatenation
    cout << "Concatenation: " << str + "!!!" << endl;

    //Substring
    int start, len;
    cout << "Starting Position: ";
    cin >> start;
    cout << "String beginning at "  
         << start << ": " << str.substr(start) << endl;

    cout << "length: ";
    cin >> len;
    cout << "String of length " << len << " starting at " 
         << start << ": " << str.substr(start, len) << endl;
}
