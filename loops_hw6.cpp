//loops-hw6-Eliezer Brown
#include <iostream>
#include <string>
using namespace std;

int main()
{
int numOne, numTwo, i;

  do {

    cout << "Enter a minimum value between 1 and 100: ";
    cin>>numOne;
    cout << "Enter a maximum value between 1 and 100: ";
    cin>>numTwo;

    if (numOne >=1 && numOne <=100 &&numOne <=numTwo) {

      break; // exit loop when value is valid
    }
    if (numOne> numTwo){
      cout<<"Minimum value must be less than maximum value "<<endl;
    }
    if (numOne <1 || numTwo >100 || numTwo<1 || numTwo >100){
     cout << "Invalid value, enter a value between 1 and 100 " << endl;
    }
    cout << endl << endl;

  } while(true);
 if(numOne <=numTwo)
 for(i=numOne; i<=numTwo; i++)
  cout <<i<<" ";



    return 0;
}
