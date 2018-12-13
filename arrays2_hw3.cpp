// hw3 arrays2-Eliezer Brown 

#include <iostream>
using namespace std;

void output(const int numbers[], int numElements);
void append(int n[], const int& CAPACITY, int& numElements, int element);
void remove(int n[], int& numElements, int element);

int main() {
    const int CAPACITY = 100;
    int numbers[CAPACITY];
    int numElements = 0;

    cout << "Adding Elements" << endl;
    append(numbers, CAPACITY, numElements, 50);
    output(numbers, numElements);
    append(numbers, CAPACITY, numElements, 20);
    output(numbers, numElements);
    append(numbers, CAPACITY, numElements, 234);
    output(numbers, numElements);
    append(numbers, CAPACITY, numElements, 16);
    output(numbers, numElements);
    append(numbers, CAPACITY, numElements, 33);
    output(numbers, numElements);
    append(numbers, CAPACITY, numElements, 82);
    output(numbers, numElements);
    append(numbers, CAPACITY, numElements, 1142);
    output(numbers, numElements);
    append(numbers, CAPACITY, numElements, 22);
    output(numbers, numElements);

    cout << "\nRemove 234 ";
    remove(numbers, numElements, 234);
    cout << endl;
    output(numbers, numElements);

    cout << "\nRemove 50 ";
    remove(numbers, numElements, 50);
    cout << endl;
    output(numbers, numElements);

    return 0;
}

void output(const int numbers[], int numElements) {
    for(int i=0; i<numElements; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

void append(int n[], const int& CAPACITY, int& numElements, int element) {
    if(numElements < CAPACITY) {
        n[numElements] = element;
        numElements++;
    }
}

void remove(int n[], int& numElements, int element) {
  if(numElements == 0) {
  cout << "The array is empty, nothing to remove." << endl;
  return;
    }

    int index = -1;
    for(int i=0; i<numElements; i++) {
      if(n[i] == element) {
        index = i;
        break;
      }
    }

    if(index == -1) {
        cout << "Element does not exist in the array." << endl;
        return;
    }

    for(int i=index; i<numElements; i++)
        n[i] = n[i+1];
    numElements--;
}
