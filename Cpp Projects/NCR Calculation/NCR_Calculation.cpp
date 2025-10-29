#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; ++i)
        fact *= i;
    return fact;
}

// Function to calculate NCR
int nCr(int n, int r) {
    if (r > n) return 0; // Invalid case
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;

    int result = nCr(n, r);
    cout << "NCR(" << n << ", " << r << ") = " << result << endl;

    return 0;
}