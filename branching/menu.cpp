//menu to order food from -E. Brown
#include <iostream>
using namespace std;

int main( ) {

    int option;

    cout << "Select an option from our menu: " << endl;
    cout << "1) Hamburger" << endl;
    cout << "2) Chicken Sandwich" << endl;
    cout << "3) Hot Dog"  << endl;

    cout << "\nSelect an option: ";
    cin >> option;
    cout << endl;

    switch(option) {
        case 1:
            cout << "You ordered a Hamburger." << endl;
            break;
        case 2:
            cout << "You ordered a Chicken Sandwich." << endl;
            break;
        case 3:
            cout << "You ordered a Hot Dog." << endl;
            break;
        default:
            cout << "You did not select an available option. Ending program.";
    }

    cout << endl;
    return 0;
}
