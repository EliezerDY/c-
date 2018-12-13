//hw 1 Arrays 2-Eliezer Brown
#include <iostream>
#include <string>
using namespace std;

const int NUM_STUDENTS = 3, NUM_GRADES = 4;

void output (const string students[], const double grades[][4], const int& NUM_STUDENTS, const int& NUM_GRADES);

double average (const double grades[][4], int i, const int& NUM_GRADES);

int main() {

    string names[NUM_STUDENTS];
    names[0] = "Alice";
    names[1] = "Brenda";
    names[2] = "Chris";

    double grades[NUM_STUDENTS][NUM_GRADES];
    grades[0][0] = 99;
    grades[0][1] = 99;
    grades[0][2] = 99;
    grades[0][3] = 99;

    grades[1][0] = 98;
    grades[1][1] = 97;
    grades[1][2] = 96;
    grades[1][3] = 95;

    grades[2][0] = 94;
    grades[2][1] = 93;
    grades[2][2] = 92;
    grades[2][3] = 91;

    output (names, grades, NUM_STUDENTS, NUM_GRADES);

    return 0;
}
void output (const string students[], const double grades[][4], const int& NUM_STUDENTS, const int& NUM_GRADES) {

  int i, j;

  for (i = 0; i < NUM_STUDENTS; i++) {
    cout << "Student: " << students[i] << endl;
    cout << "Grades: ";

    for (j = 0; j < NUM_GRADES; j++) {
      cout << grades[i][j];
      if (j < (NUM_GRADES-1)) {
        cout << ", ";
      }

    }

    cout << endl;
    cout << "GPA: " << average (grades, i, NUM_GRADES) << endl << endl;

  }
}

double average (const double grades[][4], int i, const int& NUM_GRADES) {

  double total = 0.0;
  for (int x = 0; x < NUM_GRADES; x++)
    total += grades[i][x];
  return total / NUM_GRADES;

}
