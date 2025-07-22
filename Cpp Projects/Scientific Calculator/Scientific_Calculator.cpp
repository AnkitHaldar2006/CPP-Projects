#include <iostream>
#include <cmath>
using namespace std;

// Function declarations
float add(float a, float b)       { return a + b; }
float subtract(float a, float b)  { return a - b; }
float multiply(float a, float b)  { return a * b; }
float divide(float a, float b)    { return b != 0 ? a / b : INFINITY; }
float power(float base, float exp){ return pow(base, exp); }
float squareRoot(float a)         { return sqrt(a); }
float sine(float angle)           { return sin(angle); }
float cosine(float angle)         { return cos(angle); }
float tangent(float angle)        { return tan(angle); }

void showMenu() {
    cout << "     Scientific Calculator    \n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "5. Power\n6. Square Root\n7. Sine\n8. Cosine\n9. Tangent\n";
    cout << "0. Exit\n";
}

int main() {
    int choice;
    float num1, num2;

    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter two numbers: "; cin >> num1 >> num2;
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Enter two numbers: "; cin >> num1 >> num2;
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Enter two numbers: "; cin >> num1 >> num2;
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Enter two numbers: "; cin >> num1 >> num2;
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Enter base and exponent: "; cin >> num1 >> num2;
                cout << "Result: " << power(num1, num2) << endl;
                break;
            case 6:
                cout << "Enter number: "; cin >> num1;
                cout << "Result: " << squareRoot(num1) << endl;
                break;
            case 7:
                cout << "Enter angle (in radians): "; cin >> num1;
                cout << "Result: " << sine(num1) << endl;
                break;
            case 8:
                cout << "Enter angle (in radians): "; cin >> num1;
                cout << "Result: " << cosine(num1) << endl;
                break;
            case 9:
                cout << "Enter angle (in radians): "; cin >> num1;
                cout << "Result: " << tangent(num1) << endl;
                break;
            case 0:
                cout << "Exiting calculator. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while(choice != 0);

    return 0;
}
