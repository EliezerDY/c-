//loops-hw3-Eliezer Brown
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num, i;
    cout<<"Enter a number: ";
  cin>>num;

cout << "Factors of " << num << " are: ";
  for( i=1; i <= num; i++) {
      if(num%i == 0)
    cout<< i<<" ";
  }

  cout << endl;
  return 0;
}
