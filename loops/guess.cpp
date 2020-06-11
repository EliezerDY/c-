  
//whileloop -guess- Eliezer Brown
#include <iostream>
using namespace std;

int main()
{
    int n=5, p;
    cout << "Guess a number: "<<endl;
    cout<<"-------------------"<<endl;

    do {

      cout<<"Select an integer from 1 to 10: ";
      cin >> p;
      if(p ==5) {
        break; // exit loop when value is valid
      }
     if (p <1 || p >10){
      cout << "Invalid value, enter a value between 1 and 10 " << endl;
    }
    if (p==1, 2, 3,4,6,7,8,9,10){
      cout<<"Try again "<<endl;
    }
  }while(true); // true condition creates an endless loop

    cout << "This is the correct number " << endl;

    /*
     * some additional code that relies upon the correct value of n
     */

    return 0;
}
