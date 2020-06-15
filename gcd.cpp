#include<iostream>
using namespace std;

int gcd(int a, int b) {
   if (b == 0)
      return a;
   return gcd(b, a % b);
}
int main() {
   int a, b;
   cout << "Enter a number: " << endl;
   cin >> a;
   cout << "Enter a second number" << endl;
   cin >> b;
   cout<<"LCM of "<< a <<" and "<< b <<" is "<< (a*b)/gcd(a, b);
   return 0;
}
