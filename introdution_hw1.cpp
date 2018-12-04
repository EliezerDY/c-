//introduction_hw1-Eliezer Brown
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string day;
  string month;
  string year;

  cout << "What day is today? ";
  cin >> day;
  cout <<"What month is it? ";
  cin >> month;
  cout << "What year is this? ";
  cout <<endl;
  cin >> year;
  cout <<endl;
  cout << "Today is: " << endl <<" " " " " "<<day << endl <<"\t" " " " "<<month <<endl
  <<"\t\t" " "<<year <<endl;

  return 0;
}
