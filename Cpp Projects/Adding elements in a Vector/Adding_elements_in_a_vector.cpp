#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {10, 20, 30};

    // Adding Elements
    nums.push_back(40);
    nums.push_back(50);

    cout << "Vector Elements:";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}