#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double max;         //maximum double
    int lines;          //number of lines
    double increment;   //the increment

    //get the maximum number
    cout << "What should I count to? ";
    cin >> max;

    //get the number of lines
    cout << "How many lines? ";
    cin >> lines;

    //compute the increment
    increment = max / (lines * 4.0 - 1);

    //go into fixed mode
    cout << fixed << setprecision(4);

    //Go through each row
    for(double start=0.0; start < max; start += increment) {
        //find max for this row
        double row_max = start + 3.0 * lines * increment; 

        if(row_max <= max) {
            //print all the columns
            for(double num=start; num<=row_max; num+=lines * increment){
                cout << num << "\t";
            }
            cout << endl;
        }
    }
}
