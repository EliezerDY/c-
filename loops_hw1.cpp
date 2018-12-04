//loops-hw1-Eliezer Brown
#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout<<"Write all numbers 0 to 30 divisble by 3 "<<endl;
    int i;


    i = 30;
    while(i>=0) {
        cout << i << " ";
        i-=3;
    }
    cout << endl;

    return 0;
}
