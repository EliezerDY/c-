//american flag -E. Brown
#include <iostream>
using namespace std;

void output(int number);
void output(int b, char a);

int main() {

    output(7);
    output(13,'=');
    cout <<endl;

    output(7);
    output(13,'-');
    cout <<endl;

    output(7);
    output(13,'=');
    cout <<endl;

    output(7);
    output(13,'-');
    cout <<endl;

    output(20,'=');
    cout<< endl;

    output(20,'-');
    cout<< endl;

    output(20,'=');
    cout<< endl;

    output(20,'-');
   cout<< endl;

return 0;
}

void output(int stars){
       for(int i=0;i<stars;i++){
         cout<<"* ";
    }
}
      void output(int num, char y){
       for(int i=0;i<num;i++){
         cout<< y << " ";
    }
}
