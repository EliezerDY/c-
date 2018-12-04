//functions hw_2-Eliezer Brown
#include <iostream>
using namespace std;


//int sumTwoIntegers(int a, int b);
void sum(int x, int y);
int main() {
    int x, y;

    cout << "Enter a value: ";
    cin >> x;
    cout<<"Enter a value to increment by: ";
    cin>>y;

    sum(x, y);
  //  int sum = sumTwoIntegers(x, y);
    cout << "The incremented value is " <<x+y<< "." << endl;

    cout << endl;
    return 0;
}

 void sum(int x, int y) {

}
//int sumTwoIntegers(int a, int b) {
//  return a+b;
