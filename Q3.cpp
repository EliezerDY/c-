#include <iostream>
using namespace std;

int main() {

    const int CAPACITY = 5;
    int numbers[CAPACITY];

    for(int i=0; i<CAPACITY; i++) {
        cout << "Enter a value: ";
        cin >> numbers[i];
    }

    cout << "\nYou entered: ";
    for(int i=0; i<CAPACITY; i++)
        cout << numbers[i] << " ";
cout << "\n\nFirst element: "<<numbers[0]<<endl;
cout << "Last element: "<<numbers[4]<<endl;
    return 0;
}
