#include <iostream>
using namespace std;

// Global variable to store balance
float balance = 1000.0; // Initial balance

// Function declarations
void showMenu();
void checkBalance();
void depositMoney();
void withdrawMoney();

int main() {
    int choice;

    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                depositMoney();
                break;
            case 3:
                withdrawMoney();
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;

    } while (choice != 4);

    return 0;
}

// Function to display the menu
void showMenu() {
    cout << "    ATM Menu    " << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;
}

// Function to check balance
void checkBalance() {
    cout << "Your current balance is " << balance << endl;
}

// Function to deposit money
void depositMoney() {
    float amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    if (amount > 0) {
        balance += amount;
        cout << "?" << amount << " deposited successfully." << endl;
    } else {
        cout << "Invalid amount. Deposit failed." << endl;
    }
}

// Function to withdraw money
void withdrawMoney() {
    float amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "?" << amount << " withdrawn successfully." << endl;
    } else if (amount > balance) {
        cout << "Insufficient balance. Withdrawal failed." << endl;
    } else {
        cout << "Invalid amount. Withdrawal failed." << endl;
    }


}
