#include <iostream>
#include <string>
using namespace std;

// Toggle case of each character
string toggleCase(string str) {
    for (char &ch : str) {
        if (isupper(ch))
            ch = tolower(ch);
        else if (islower(ch))
            ch = toupper(ch);
    }
    return str;
}

// Capitalize first letter of each word
string capitalizeWords(string str) {
    bool newWord = true;
    for (char &ch : str) {
        if (isspace(ch)) {
            newWord = true;
        } else if (newWord && isalpha(ch)) {
            ch = toupper(ch);
            newWord = false;
        } else {
            ch = tolower(ch);
        }
    }
    return str;
}

// Find the largest word in a sentence
string largestWord(string str) {
    int maxLen = 0, currLen = 0, start = 0, maxStart = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i < str.length() && str[i] != ' ') {
            if (currLen == 0) start = i;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
        }
    }
    return str.substr(maxStart, maxLen);
}

// Sort characters in a string (simple bubble sort)
string sortCharacters(string str) {
    for (int i = 0; i < str.length(); i++) {
        for (int j = i + 1; j < str.length(); j++) {
            if (str[j] < str[i])
                swap(str[i], str[j]);
        }
    }
    return str;
}

// Remove special characters
string removeSpecialChars(string str) {
    string result = "";
    for (char ch : str) {
        if (isalnum(ch))
            result += ch;
    }
    return result;
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "\n?? Toggle Case: " << toggleCase(input);
    cout << "\n?? Capitalize Words: " << capitalizeWords(input);
    cout << "\n?? Largest Word: " << largestWord(input);
    cout << "\n?? Sorted Characters: " << sortCharacters(input);
    cout << "\n?? Removed Special Characters: " << removeSpecialChars(input);

    return 0;
}

















