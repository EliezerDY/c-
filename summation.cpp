#include <iostream>
using namespace std;

int summation(int m, int n);

int main() {

    int minVal, maxVal;
      cout << "Enter a minimum value: ";
      cin >> minVal;
      cout << "Enter a maximum value: ";
      cin >> maxVal;
  int sum= summation(minVal, maxVal);
  cout<<"The summation of the specified range is "<<sum<<"."<<endl;

    return 0;
}


int summation(int m, int n) {
  int sum=0;
  for(int i=m; i <=n; i++)
    sum += i;
    return sum;
}
