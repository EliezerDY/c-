//grade_converter -E. Brown
#include <iostream>
using namespace std;

int main() {
    double origGrade, convGrade;
    string letter;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Enter your grade: ";
    cin >> origGrade;

    if(origGrade >= 0 && origGrade <= 100) {

        if(origGrade >= 96)                        { convGrade = 4.00; letter = "A";}
        else if(origGrade >= 90 && origGrade < 96) { convGrade = 3.70; letter = "A-";}
        else if(origGrade >= 87 && origGrade < 90) { convGrade = 3.30; letter = "B+";}
        else if(origGrade >= 84 && origGrade < 87) { convGrade = 3.00; letter = "B";}
        else if(origGrade >= 80 && origGrade < 84) { convGrade = 2.70; letter = "B-";}
        else if(origGrade >= 77 && origGrade < 80) { convGrade = 2.30; letter = "C+";}
        else if(origGrade >= 74 && origGrade < 77) { convGrade = 2.00; letter = "C";}
        else if(origGrade >= 70 && origGrade < 74) { convGrade = 1.70; letter = "C-";}
        else if(origGrade >= 67 && origGrade < 70) { convGrade = 1.30; letter = "D+";}
        else if(origGrade >= 64 && origGrade < 67) { convGrade = 1.00; letter = "D";}
        else if(origGrade >= 60 && origGrade < 64) { convGrade = 0.70; letter = "D-";}
        else                                       { convGrade = 0.00; letter = "F";}

        cout << "\nYou will receive a letter grade of "
             << letter
             << " with a "
             << convGrade
             << " GPA."
             << endl;
    }
    else {
        cout << "\nYou have not entered a grade between 0 and 100. Ending program." << endl;
    }

    cout << endl;
    return 0;
}
