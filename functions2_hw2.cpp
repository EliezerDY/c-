//functions2_hw2-Eliezer Brown
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int y;

  cout<<"Enter a number: ";
  cin>>y;
  	double result = sqrt(y);
      int sqrtRoundedUp = ceil(result);
	cout << "Square root of " << y << " rounded to the nearest integer is " << sqrtRoundedUp <<"."<< endl;

	return 0;
}
