#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your percentage score (0–100): ";
    cin >> score;

    // Convert score to grade band
    int gradeBand = score / 10;

    switch (gradeBand) {
        case 10: // For score = 100
        case 9:
            cout << "Grade: A" << endl;
            break;
        case 8:
            cout << "Grade: B" << endl;
            break;
        case 7:
            cout << "Grade: C" << endl;
            break;
        case 6:
            cout << "Grade: D" << endl;
            break;
        default:
            cout << "Grade: F" << endl;
            break;
    }

    return 0;
}