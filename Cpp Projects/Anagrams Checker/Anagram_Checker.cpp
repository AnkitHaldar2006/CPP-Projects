#include <iostream>
#include<string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    // If lengths differ, they can't be anagrams
    if (str1.length() != str2.length()) {
        cout << "Not anagrams." << endl;
        return 0;
    }

    // Create a frequency array for 26 lowercase letters
    int freq[26] = {0};

    // Count characters from str1 and subtract from str2
    for (int i = 0; i < str1.length(); i++) {
        freq[str1[i] - 'a']++;
        freq[str2[i] - 'a']--;
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            cout << "Not anagrams." << endl;
            return 0;
        }
    }

    cout << "Anagrams!" << endl;
    return 0;
}
