// hw2 arrays2 - Eliezer Brown

#include <iostream>
using namespace std;

void output(const int numbers[], int numElements);
void append(int n[], const int& CAPACITY, int& numElements, int element);
void insertFirst(int n[], const int& CAPACITY, int& numElements, int element);
void removeFirst(int n[], const int& CAPACITY, int& numElements, int element);

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

    cout << "\nRemove First" << endl;
    removeFirst(numbers, CAPACITY, numElements, 100);
    output(numbers, numElements);

    cout << "\nInsert First: 100" << endl;
    insertFirst(numbers, CAPACITY, numElements, 100);
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

void insertFirst(int n[], const int& CAPACITY, int& numElements, int element) {
    if(numElements >= CAPACITY)
        return;
    for(int i=numElements-1; i>=0; i--) {
        n[i+1] = n[i];
    }
    n[0] = element;
    numElements++;
}

void removeFirst(int n[], const int& CAPACITY, int& numElements, int element) {
    if(numElements >= CAPACITY)
        return;
    for(int i=1; i<numElements; i++) {
        n[i-1] = n[i];
    }
    numElements--;
}
