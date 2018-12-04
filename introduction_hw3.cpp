//introduction_hw3-Eliezer Brown
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string major;
  string school;

  cout << "What is your major? ";
  getline (cin,major);
  cout <<"What four year school do you plan to attend? ";
  cin >>school;
  cout <<endl;
  cout <<"You will be studying" <<" "<<major <<" "<<"at" <<" "<<school <<".";

 return 0;
 }
