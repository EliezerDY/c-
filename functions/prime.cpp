//functions2_hw3-Eliezer Brown
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool isPrime(int number){
  bool isPrimeNum = true;

  for(int i=2;i<=number-1;i++){
    if(number%i==0){
      isPrimeNum = false;
      break;
    }
  }
  return isPrimeNum;
}

int main()
{ int n;


  cout<<"Enter a number: ";
  cin>>n;
  double sq = sqrt(n);
  int number =ceil(sq);

  for (int i=2; i<number; i++){
    if (n%i!=0){
    cout<<"Is "<<i<<" a factor of"<<n<<"? No."<<endl;
  }
  else {
    cout<<"Is "<<i<<" a factor of "<<n<<"? Yes. "<<endl;
  }
 }
  if(isPrime(n)){
  //  for(int i=0; 1<=sqrt)
    cout<<n<<" is a prime number. "<<endl;
  }
  else{
    cout<<n<<" isn't a prime number. "<<endl;
  }



    return 0;
}
