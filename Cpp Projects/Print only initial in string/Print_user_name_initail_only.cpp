#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);  // Read full line including spaces

    stringstream ss(fullName);
    string word;

    cout << "Initials: ";
    while (ss >> word) {
        cout << char(toupper(word[0])) << " ";  // Print first letter in uppercase
    }

    cout << endl;
    return 0;
}