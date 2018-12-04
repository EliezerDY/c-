// Homework #4 Expressions - Eliezer Brown

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main( ) {

    const float taxRate = 8.875;
    float firstItem, secondItem, thirdItem, subTotal, tax, total;

    cout << "Enter the cost of the first item: ";
    cin >> firstItem;

    cout << "Enter the cost of the second item: ";
    cin >> secondItem;

    cout << "Enter the cost of the third item: ";
    cin >> thirdItem;

    subTotal = firstItem + secondItem + thirdItem;
    tax = subTotal * (taxRate / 100.00);
    total = subTotal + tax;

    cout << "\n\n";

    cout << "Shopping Cart" << endl;
    cout << "-------------" << endl;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    std::cout << std::left << std::setw(25) << "Cost of first item: " << "$" << firstItem << "\n";
    std::cout << std::left << std::setw(25) << "Cost of second item: " << "$" << secondItem << "\n";
    std::cout << std::left << std::setw(25) << "Cost of third item: " << "$" << thirdItem << "\n";

    cout << "\n";

    std::cout << std::left << std::setw(25) << "Subtotal: " << "$" << subTotal << "\n";
    std::cout << std::left << std::setw(25) << "Tax: " << "$" << tax << "\n";
    std::cout << std::left << std::setw(25) << "Total: " << "$" << total << "\n";

    cout << "\n";

    return 0;

}
