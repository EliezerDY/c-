//variables_hw1-Eliezer Brown
#include <iostream>
#include <string>
using namespace std;

int main()
{
 int length;
 int width;
 int height;
 cout << "Input the height of a box in inches:";
 cin >>length;
 cout <<endl;
cout << "Input the length of a box in inches:";
 cin >> width;
 cout <<endl;
 cout << "Input the width of a box in inches:";
 cin >> height;
 cout <<endl;

 cout <<"the volume of the box is " << length * width * height <<" cubic inches.";


return 0;
}
