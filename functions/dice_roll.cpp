//dice_roll-Eliezer Brown
#include <iostream>
#include<time.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int roll();
int roll(int x);
int main()
{
  srand(time(0));
    for (int i =1; i<=3; i++){

//int number = roll();
     cout <<"Roll "<<i<<"(6): "<< roll() << endl;
  }
 srand(time(0));
   for (int i =1; i<=3; i++){
      cout<<"Roll"<<i<< "("<<i* 10<<")"<<roll(i*10)<<endl;
  }
  return 0;
}

int roll(){
  return (1+(rand()%6));
}
int roll(int x){
  return (1+(rand()%x+1));
}
