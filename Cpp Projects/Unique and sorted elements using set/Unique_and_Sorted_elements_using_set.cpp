#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {30, 10, 20, 20, 10};  // duplicates removed automatically

    cout << "Set elements: ";
    for(int x : s) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
