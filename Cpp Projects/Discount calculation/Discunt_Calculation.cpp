#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double purchaseAmount, discount = 0, netPayable;

    // Input customer name
    cout << "Enter customer name: ";
    getline(cin, name);

    // Input purchase amount
    cout << "Enter purchase amount: ";
    cin >> purchaseAmount;

    // Apply discount rules
    if (purchaseAmount <= 5000) {
        discount = 0;
    } 
    else if (purchaseAmount > 5000 && purchaseAmount <= 10000) {
        discount = purchaseAmount * 0.10; // 10% discount
    } 
    else {
        discount = purchaseAmount * 0.20; // 20% discount
    }

    // Calculate net payable
    netPayable = purchaseAmount - discount;

    // Output result
    cout << "\nCustomer Name: " << name << endl;
    cout << "Purchase Amount: Rs. " << purchaseAmount << endl;
    cout << "Discount: Rs. " << discount << endl;
    cout << "Net Payable Amount: Rs. " << netPayable << endl;

    return 0;
}
