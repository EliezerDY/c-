//functions hw_3-Eliezer Brown
#include<iostream>
using namespace std;

int fact(int n);

int main()
{

 int n=0, result=0;

 cout<<"Enter a number: ";
 cin>>n;

 result=fact(n);
 cout<<n <<"! = " <<result <<endl;

}

int fact(int n)
{

 int f=1;

 for(int i=1; i<=n; i++)
 {
  f=f*i;
 }

 return f;

}
