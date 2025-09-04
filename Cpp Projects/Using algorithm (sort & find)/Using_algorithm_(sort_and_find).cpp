#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {4, 2, 7, 1, 9};

    sort(v.begin(), v.end()); // sort ascending

    cout << "Sorted vector: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Search
    if (binary_search(v.begin(), v.end(), 7))
        cout << "7 found in vector!" << endl;
    else
        cout << "7 not found!" << endl;

    return 0;
}
