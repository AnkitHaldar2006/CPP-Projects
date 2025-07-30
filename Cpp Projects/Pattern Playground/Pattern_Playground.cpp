#include <iostream>
using namespace std;

// Function to generate Pascal's Triangle
void pascalTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        int val = 1;
        for (int space = 1; space <= rows - i; space++)
            cout << "  ";
        for (int j = 0; j <= i; j++) {
            cout << val << "   ";
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
}

// Function to generate Zigzag Pattern
void zigzagPattern(int n) {
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= n; col++) {
            if ((row + col) % 4 == 0 || (row == 2 && col % 4 == 0))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

// Function to generate Butterfly Pattern
void butterflyPattern(int n) {
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    // Lower half
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}

int main() {
    int choice, size;
    do {
        cout << "\n=== Pattern Generator ===\n";
        cout << "1. Pascal's Triangle\n";
        cout << "2. Zigzag Pattern\n";
        cout << "3. Butterfly Pattern\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            cout << "Enter size (recommended: 5 to 10): ";
            cin >> size;
        }

        switch (choice) {
            case 1: pascalTriangle(size); break;
            case 2: zigzagPattern(size); break;
            case 3: butterflyPattern(size); break;
            case 4: cout << "Exiting..."; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
