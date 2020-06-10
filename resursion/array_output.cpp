//Eliezer Brown
#include <iostream>
using namespace std;

void output(const int numbers[], int x);

int main() {
    const int nums = 10;
    int numbers[nums] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

  cout << "Array: ";

    output(numbers, nums);
    cout << endl;
    return 0;
}

void output(const int numbers[], int x) {
    if(x == 1)
        cout << numbers[0] << " ";
    else {
        output(numbers, x - 1);
        cout << numbers[x - 1] << " ";
    }
}
