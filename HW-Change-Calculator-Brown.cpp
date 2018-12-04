// Homework #4 Expressions - Eliezer Brown

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main( ) {

    const int NICKELS = 5;
    const int DIMES = 10;
    const int QUARTERS = 25;
    int Amount, Quarters, Dimes, Nickels, Pennies;

    cout << "Change Calculator" << endl;
    cout << "-----------------" << endl;
    cout << "Enter dollar amount as an integer): $";
    cin >> Amount;

    cout << "\n\n";

    Quarters = Amount / QUARTERS;
    Amount = Amount - (Quarters * QUARTERS);

    Dimes = Amount / DIMES;
    Amount = Amount - (Dimes * DIMES);

    Nickels = Amount / NICKELS;
    Amount = Amount - (Nickels * NICKELS);

    Pennies = Amount % 5;

    cout << "The equivalent in coins:\n";
    cout << Quarters << " Quarters\n";
    cout << Dimes << " Dimes\n";
    cout << Nickels << " Nickels\n";
    cout << Pennies << " Pennies\n";

    return 0;

}
