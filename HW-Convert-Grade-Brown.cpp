// Homework #4 Expressions - Eliezer Brown

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main( ) {

    int grade;
    float convertedGrade;

    cout << "Grade Converter" << endl;
    cout << "---------------" << endl;

    cout << "Input grade (60-100): ";
    cin >> grade;

    convertedGrade = (grade - 60) / 10.0;

    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    std::cout << "Converted grade (0.0 to 4.0) " << convertedGrade << "\n";

    return 0;

}
