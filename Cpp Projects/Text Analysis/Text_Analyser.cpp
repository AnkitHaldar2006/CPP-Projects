#include <iostream>
#include <string>
using namespace std;

// Function to count words
int countWords(const string& text) {
    int words = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ')
            words++;
    }
    return words + 1; // Last word
}

// Function to count spaces
int countSpaces(const string& text) {
    int spaces = 0;
    for (char ch : text) {
        if (ch == ' ')
            spaces++;
    }
    return spaces;
}

// Function to count vowels and consonants
void countVowelsConsonants(const string& text, int& vowels, int& consonants) {
    vowels = consonants = 0;
    for (char ch : text) {
        char lower = tolower(ch);
        if (lower >= 'a' && lower <= 'z') {
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }
}

// Function to count uppercase and lowercase letters
void countCase(const string& text, int& upper, int& lower) {
    upper = lower = 0;
    for (char ch : text) {
        if (isupper(ch))
            upper++;
        else if (islower(ch))
            lower++;
    }
}

int main() {
    string text;
    cout << "Enter a paragraph:\n";
    getline(cin, text);

    int characters = text.length();
    int words = countWords(text);
    int spaces = countSpaces(text);

    int vowels, consonants;
    countVowelsConsonants(text, vowels, consonants);

    int upper, lower;
    countCase(text, upper, lower);

    // Output results
    cout << "\n    Text Analysis    \n";
    cout << "Total Characters: " << characters << endl;
    cout << "Total Words: " << words << endl;
    cout << "Total Spaces: " << spaces << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Uppercase Letters: " << upper << endl;
    cout << "Lowercase Letters: " << lower << endl;

    return 0;
}
