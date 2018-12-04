#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
  cout.setf(ios::fixed);
cout.precision(2);

double grade, gpa;

cout<< "Enter your grade: " << endl;
cin>>grade;

if(grade>=0||grade<=100)
{
  if(grade>=96 && grade<=100)
  {
    gpa=4.00;
    cout <<"You will receive a letter grade of A with a "<<gpa<< " GPA" <<endl;
  }
  else if(grade>=90 && grade<=95){
    gpa=3.70;
    cout <<"You will receive a letter grade of A- with a "<<gpa<< " GPA" <<endl;
  }
  else if(grade>=87 && grade<=89){
    gpa=3.30;
    cout <<"You will receive a letter grade of B+ with a "<<gpa<< " GPA" <<endl;
  }
  else if(grade>=84 && grade<=86){
    gpa=3.00;
    cout <<"You will receive a letter grade of B with a "<<gpa<< " GPA" <<endl;
  }
  else if(grade>=80 && grade<=83){
    gpa=2.70;
    cout <<"You will receive a letter grade of B- with a "<<gpa<< " GPA" <<endl;
  }
  else if(grade>=77 && grade<=79){
    gpa=2.30;
    cout <<"You will receive a letter grade of C+ with a "<<gpa<< " GPA" <<endl;
  }
  else if(grade>=74 && grade<=76){
    gpa=2.00;
    cout <<"You will receive a letter grade of C with a "<<gpa<< " GPA" <<endl;
  }
  else if(grade>=70 && grade<=73){
    gpa=1.70;
    cout <<"You will receive a letter grade of C- with a "<<gpa<< " GPA" <<endl;
  }
  else if(grade>=67 && grade<=69){
    gpa=1.30;
    cout <<"You will receive a letter grade of D+ with a "<<gpa<< " GPA" <<endl;
  }
  else if(grade>=64 && grade<=66){
    gpa=1.00;
    cout <<"You will receive a letter grade of D with a "<<gpa<< " GPA" <<endl;
  }
  else if(grade>=60 && grade<=63){
    gpa=0.70;
    cout <<"You will receive a letter grade of D- with a "<<gpa<< " GPA" <<endl;
  }
  else if(grade>=0 && grade<=59){
    gpa=0.00;
    cout <<"You will receive a letter grade of F with a "<<gpa<< " GPA" <<endl;

}
}

else{
  cout<< "You have not entered a grade between 0 and 100. Ending Program."<<endl;

}

cout<<endl;

return 0;
}
