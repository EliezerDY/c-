#include <iostream>
#include <string>
using namespace std;

int main()
{
    int choice;
    cout<<"Select an option "<<endl
    <<"1)Hamburger "<<endl
    <<" 2)Chicken Sandwich "<<endl
    <<"3)Hot Dog"<<endl
    <<"Select an option: "<<endl;
    cin>>choice;
    switch (choice) {
       case 1: cout << "You ordered a hamburger. "<<endl;
       break;
       case 2: cout << "You ordered a chicken sandwich. "<<endl;
       break;
       case 3: cout << "You ordered a hot dog. "<<endl;
       break;
       default: cout<<"Not a valid choice. Ending program "<<endl;
   }
   cout << endl;
  return 0;
}
