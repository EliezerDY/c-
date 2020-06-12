//E. Brown 
#include <iostream>
using namespace std;

int factorial(int n);

int main( ) {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << number << "! = " << factorial(number) << endl;

    cout << endl;
    return 0;
}

int factorial(int n) {
    int answer = 1;
    for(int i=n; i>0; i--) {
        answer = answer * i;
    }
    return answer;
}
