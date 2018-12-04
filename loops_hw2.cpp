//loops-hw2-Eliezer Brown
#include <iostream>
using namespace std;
int main()
{
    int num, ex, ans=1,i;
    cout << " Enter a number: ";
    cin >> num;
    cout << " Enter an exponent: ";
	cin>>ex;

    for (i = 1; i <=ex; i++)
    {
       ans=ans*num;
    }
	  cout <<num<<" to the power of "<<ex<<" is "<<ans<<endl ;
}
