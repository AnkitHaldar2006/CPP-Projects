#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    string correctPassword = "1234";

    do {
        cout << "Enter password: ";
        cin >> password;

        if (password != correctPassword) {
            cout << "Incorrect password. Try again.\n";
        }
    } while (password != correctPassword);

    cout << "Correct password! Access granted.\n";
    return 0;
}