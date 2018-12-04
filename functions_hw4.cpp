//functions hw_4-Eliezer Brown
#include<iostream>
using namespace std;

using namespace std;

void convert(char x, char&y);
int main()
{
	//char ch;
char ch, opp;

	cout<<"Enter a letter: ";
	cin>>ch;
convert (ch, opp);
cout<<"Case converted: "<<opp<<". "<<endl;
	//check for valid alphabet

			;	//none

	//	cout<<"Case converted: "<<ch<<endl;
    return 0;

	}

  void convert (char x, char &y)
  {
  //if((a>='A' && a<='Z') || (a>='a' && a<='z'))

    //check case and convert into opposite case
  if(static_cast<int>(x) <  97)
  y = static_cast<char>(static_cast<int>(x)+32);
  else if (static_cast<int>(x)>97)
  y=static_cast<char>(static_cast<int>(x)-32);
//	else
//	{
	//	cout<<"Entered character is not a valid alphabet!!!"<<endl;
	//}

}
