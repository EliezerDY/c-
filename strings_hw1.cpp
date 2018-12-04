//strings_hw1-Eliezer Brown
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string first="Eliezer";
  string last= "Brown";

  cout << "Name: ";
  string name= first + " " + last;
  cout <<name <<endl;
  cout << "Length: " << name.length() << endl;
  name.insert(8, "D ");
    cout << "Name: " << name << endl;

  cout << "Initials: " << name[0] <<"."<< name[8]<<"." << name[10]<<"."<< endl;








  return 0;
}
