#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{

    float radian, degree, pi;

    int choice;

    pi = 3.14;

// Menu
    cout << "Pick a conversian rate (1 or 2):" << endl;
    cout << "1.Radian to Degree" << endl;
    cout << "2.Degree to Raidan" << endl;
    cout << "\n";
    cout << "Enter Your Choice:";
    cin >> choice;

// Switch starts here

switch (choice)
{

    case 1:

    cout << "Enter Radian Value to Convert: ";
    cin >> radian;
    cout << "\n\n";
    degree = radian * 180/pi;

    cout << "The Degree Value for" << " "
    << radian << " " << "radian is" << " "
    << degree << " " << "degree" << " " << endl;

    break;

    case 2:

    cout << "Enter Degree Value to Convert:";
    cin >> degree;
    cout << "\n\n";

    radian = degree * pi/180;

    cout << "The Radian Value for" << " "
    << degree << " " << "degree is" << " "
    << radian << "radian" << " " << endl;

    break;

    default:

    cout << "Wrong Value! Try again later" << endl;

}
   return EXIT_SUCCESS;

}
