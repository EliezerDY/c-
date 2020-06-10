// Eliezer Brown
#include <iostream>
using namespace std;

   void outputNumberInReverse(int n);
 int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Reversed Number: ";
    outputNumberInReverse(n);

    cout << endl;
    return 0;
}

void outputNumberInReverse(int x) {
     if(x < 10)
  cout << x;
      else {
    cout << x%10;
        outputNumberInReverse(x/10);
    }
}
