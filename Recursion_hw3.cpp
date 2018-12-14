// recursion_hw3 - Eliezer Brown

#include <iostream>
using namespace std;

int factorial(int x);

        int main() {
  int n;
cout << "Enter a number: ";
cin >> n;

cout << n << "! = " << factorial(n) << endl;
cout << endl;
    return 0;
}

int factorial(int x) {
    if (x == 1)
        return 1;
    return x * factorial(x - 1);
}
