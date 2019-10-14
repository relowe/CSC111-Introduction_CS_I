//Ask the user their name and greet them
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;  //the name of the user

    //get the name
    cout << "What is your name? ";
    cin >> name;

    //greet the user
    cout << "Hello " << name << ", how are you?" << endl;
}
