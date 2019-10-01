// What will the following program display?
#include<iostream>

using namespace std;

void scope_test(int x)
{
    x += 10;
}


int main()
{
    int x = 32;

    scope_test(x);

    cout << x << endl;
}
