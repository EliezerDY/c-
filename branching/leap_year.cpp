// branching_hw3 - S. Trowbridge

#include <iostream>
using namespace std;

int main() {

    int year;
    bool isDivBy4 = false, isDivBy100 = false, isDivBy400 = false;

    cout << "Enter a year: ";
    cin >> year;
    cout << endl;

    if(year % 4 == 0) isDivBy4 = true;     
    if(year % 100 == 0) isDivBy100 = true;  
    if(year % 400 == 0) isDivBy400 = true;  

    cout << "Is the year evenly divisible by 4?: ";
    if(isDivBy4)
        cout << "Yes." << endl;
    else
        cout << "No." << endl;

    cout << "Is the year evenly divisible by 100?: ";
    if(isDivBy100)
        cout << "Yes." << endl;
    else
        cout << "No." << endl;

    cout << "Is the year evenly divisible by 400?: ";
    if(isDivBy400)
        cout << "Yes." << endl;
    else
        cout << "No." << endl;

    // if C || A && B!
    if(isDivBy400 || (isDivBy4 && !isDivBy100))
        cout << endl << year << " is a leap year.";
    else
        cout << endl << year << " is not a leap year.";

    cout << endl << endl;
    return 0;
}
