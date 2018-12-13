#include <iostream>
using namespace std;

int main() {
    int n;
    do {
          cout << "Enter an odd number between 5 and 11 inclusive:  ";
          cin >> n;
          cout << endl;
          if(n>=5 && n<=11)
          {
            if(n%2!=0)

          break;
        }
          else  cout << "Invalid value." << endl;
      } while(true);


  for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=n; col++)
        {
          if( row == col || row==n+1-col )
              cout << "x ";


                  else
                  cout << " * ";
      }
      cout << endl;
  }
  cout << endl;



  return 0;
}
