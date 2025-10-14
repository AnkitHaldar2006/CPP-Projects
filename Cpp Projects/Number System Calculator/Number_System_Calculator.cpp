#include <iostream>
#include <string>
#include <sstream>
#include <bitset>
#include <iomanip>
#include <cmath>

using namespace std;

// Decimal to Binary
string decimalToBinary(int decimal) {
    return bitset<32>(decimal).to_string().substr(32 - (int)log2(decimal + 1));
}

// Decimal to Octal
string decimalToOctal(int decimal) {
    stringstream ss;
    ss << oct << decimal;
    return ss.str();
}

// Decimal to Hexadecimal
string decimalToHex(int decimal) {
    stringstream ss;
    ss << hex << uppercase << decimal;
    return ss.str();
}

// Binary to Decimal
int binaryToDecimal(string binary) {
    return stoi(binary, nullptr, 2);
}

// Octal to Decimal
int octalToDecimal(string octal) {
    return stoi(octal, nullptr, 8);
}

// Hexadecimal to Decimal
int hexToDecimal(string hex) {
    return stoi(hex, nullptr, 16);
}

void showMenu() {
    cout << "\n--- Number System Calculator ---\n";
    cout << "1. Decimal to Binary\n";
    cout << "2. Decimal to Octal\n";
    cout << "3. Decimal to Hexadecimal\n";
    cout << "4. Binary to Decimal\n";
    cout << "5. Octal to Decimal\n";
    cout << "6. Hexadecimal to Decimal\n";
    cout << "0. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1: {
                int dec;
                cout << "Enter Decimal: ";
                cin >> dec;
                cout << "Binary: " << decimalToBinary(dec) << endl;
                break;
            }
            case 2: {
                int dec;
                cout << "Enter Decimal: ";
                cin >> dec;
                cout << "Octal: " << decimalToOctal(dec) << endl;
                break;
            }
            case 3: {
                int dec;
                cout << "Enter Decimal: ";
                cin >> dec;
                cout << "Hexadecimal: " << decimalToHex(dec) << endl;
                break;
            }
            case 4: {
                string bin;
                cout << "Enter Binary: ";
                cin >> bin;
                cout << "Decimal: " << binaryToDecimal(bin) << endl;
                break;
            }
            case 5: {
                string oct;
                cout << "Enter Octal: ";
                cin >> oct;
                cout << "Decimal: " << octalToDecimal(oct) << endl;
                break;
            }
            case 6: {
                string hex;
                cout << "Enter Hexadecimal: ";
                cin >> hex;
                cout << "Decimal: " << hexToDecimal(hex) << endl;
                break;
            }
            case 0:
                cout << "Exiting calculator. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}