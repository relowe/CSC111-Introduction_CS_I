#include<iostream>

using namespace std;

//Global Scope

void count(int start, int stop, int increment)
{
    for(int i=start; i<=stop; i+=increment) {
        cout << i << endl;
    }
}

int main()
{
    int start, stop, increment;

    //read in start stop and increment
    cout << "Enter start stop and increment: ";
    cin >> start >> stop >> increment;

    //count
    count(start, stop, increment);
}
