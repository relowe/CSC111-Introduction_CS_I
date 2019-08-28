#include <iostream>

using namespace std;

int main()
{
    char choice;  //The choice made by the user

    //Get the user's choice
    cout << "In my opinion, computer programming is _______." << endl
         << "\tA) the best part of my day" << endl
         << "\tB) what gives me a sense of purpose" << endl
         << "\tC) how I scream into the void" << endl
         << endl
         << "Your Choice? ";
    cin >> choice;

    //report the user's choice
    cout << "You chose " << choice << "." << endl;
}
