#include <iostream>
using namespace std;

// Function to calculate factorial of a digit
int factorial(int num) {
    int fact = 1;
    for (int i = 2; i <= num; ++i)
        fact *= i;
    return fact;
}

// Function to check Krishnamurthy number
bool isKrishnamurthy(int number) {
    int original = number;
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }

    return sum == original;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isKrishnamurthy(num))
        cout << num << " is a Krishnamurthy number." << endl;
    else
        cout << num << " is not a Krishnamurthy number." << endl;

    return 0;
}
