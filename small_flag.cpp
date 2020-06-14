//arraysI hw_3-Eliezer Brown
#include <iostream>
using namespace std;

int main( ) {


  char diff[7][20];

for(int i=0; i<7; i++) {
    for(int j=0; j<20; j++)
        {
    if(j<7  && i <4)
      diff[i][j] = '*';
    else if (i%2==0)
      diff[i][j] = '=';
    else
      diff[i][j] = '-';
      }
}

    for(int i=0; i<7; i++) {
    for(int j=0; j<20; j++)
    cout << diff[i][j] << " ";
    cout << endl;
    }

    cout << endl;
    return 0;
}
