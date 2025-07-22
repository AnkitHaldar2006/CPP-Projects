#include<iostream>
using namespace std;

// Length conversions
void cmTOinch(int cm) {
    double toinch;
    toinch = cm / 2.54;
    cout << "Cm to inch is: " << toinch << endl;
}

void inchTOfeet(int in) {
    double tofeet;
    tofeet = in / 12.0;
    cout << "Inch to feet is: " << tofeet << endl;
}

void feetTOcm(int ft) {
    double tocm;
    tocm = ft * 30.48;
    cout << "Feet to cm is: " << tocm << endl;
}

void lengthConverter() {
    int choice;
    do {
        cout << "\nSelect size unit to convert:\n";
        cout << "1. Cm to inch\n2. Inch to feet\n3. Feet to cm\n4. Exit\n";
        cin >> choice;

        int value;
        switch (choice) {
            case 1:
                cout << "Enter cm: ";
                cin >> value;
                cmTOinch(value);
                break;
            case 2:
                cout << "Enter inches: ";
                cin >> value;
                inchTOfeet(value);
                break;
            case 3:
                cout << "Enter feet: ";
                cin >> value;
                feetTOcm(value);
                break;
            case 4:
                cout << "Exit from length converter!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);
}

// Weight conversions
void kgTOlbs(double kg) {
    double lbs = kg * 2.20462;
    cout << "Kg to pounds: " << lbs << endl;
}

void lbsTOkg(double lbs) {
    double kg = lbs / 2.20462;
    cout << "Pounds to kg: " << kg << endl;
}

void weightConverter() {
    int choice;
    do {
        cout << "\nSelect weight unit to convert:\n";
        cout << "1. Kg to pounds\n2. Pounds to kg\n3. Exit\n";
        cin >> choice;

        double value;
        switch (choice) {
            case 1:
                cout << "Enter kg: ";
                cin >> value;
                kgTOlbs(value);
                break;
            case 2:
                cout << "Enter pounds: ";
                cin >> value;
                lbsTOkg(value);
                break;
            case 3:
                cout << "Exit from weight converter!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);
}

// Temperature conversions
void CtoF(double c) {
    double f = (c * 9/5) + 32;
    cout << "Celsius to Fahrenheit: " << f << endl;
}

void FtoC(double f) {
    double c = (f - 32) * 5/9;
    cout << "Fahrenheit to Celsius: " << c << endl;
}

void tempConverter() {
    int choice;
    do {
        cout << "\nSelect temperature unit to convert:\n";
        cout << "1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n3. Exit\n";
        cin >> choice;

        double value;
        switch (choice) {
            case 1:
                cout << "Enter Celsius: ";
                cin >> value;
                CtoF(value);
                break;
            case 2:
                cout << "Enter Fahrenheit: ";
                cin >> value;
                FtoC(value);
                break;
            case 3:
                cout << "Exit from temperature converter!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);
}

int main() {
    int select;
    do {
        cout << "\nSelect conversion:\n";
        cout << "1. Length\n2. Weight\n3. Temperature\n4. Exit\n";
        cin >> select;

        switch (select) {
            case 1:
                lengthConverter();
                break;
            case 2:
                weightConverter();
                break;
            case 3:
                tempConverter();
                break;
            case 4:
                cout << "Exit from main menu!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (select != 4);

    return 0;
}

