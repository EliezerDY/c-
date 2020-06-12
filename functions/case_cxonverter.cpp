//case_converter - E. Brown

#include <iostream>
using namespace std;

void caseConverter(char& c);

int main( ) {
    char letter;

    cout << "Enter a letter: ";
    cin >> letter;

    caseConverter(letter);
    cout << "Case converted: " << letter << endl;

    cout << endl;
    return 0;
}

void caseConverter(char& c) {
    if(static_cast<int>(c) > 96)
        c = static_cast<char>(static_cast<int>(c) - 32);
    else
        c = static_cast<char>(static_cast<int>(c) + 32);
}
