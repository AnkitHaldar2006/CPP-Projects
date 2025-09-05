#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binaryToDecimal(string b) {
    int decimal = 0;
    int n = b.size();

    // Traverse from left to right
    for (int i = 0; i < n; i++) {
        if (b[i] == '1') {
            decimal += pow(2, n - i - 1);
        }
    }
    return decimal;
}

int main() {
    string b;
    cout << "Enter binary number: ";
    cin >> b;

    cout << "Decimal equivalent: " << binaryToDecimal(b) << endl;
    return 0;
}
