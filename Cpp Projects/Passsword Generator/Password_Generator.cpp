#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int length;
    string password = "";
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";

    cout << " Enter password length: ";
    cin >> length;

    srand(time(0)); // Seed for randomness

    for (int i = 0; i < length; i++) {
        password += characters[rand() % characters.length()];
    }

    cout << "\n✅ Your generated password: " << password << "\n";

    return 0;
}