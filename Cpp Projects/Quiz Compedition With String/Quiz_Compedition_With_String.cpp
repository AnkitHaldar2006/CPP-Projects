 #include <iostream>
#include <string>
using namespace std;

// Manual lowercase conversion using ASCII
char toLowerChar(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return ch + 32;
    return ch;
}

// Convert entire string to lowercase
string toLowerCase(string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = toLowerChar(str[i]);
    }
    return str;
}

// Function to ask a question
bool askQuestion(string question, string correctAnswer) {
    string userAnswer;
    cout << question << endl;
    cout << "Your answer: ";
    getline(cin, userAnswer);

    if (toLowerCase(userAnswer) == toLowerCase(correctAnswer)) {
        cout << "?Correct!\n";
        return true;
    } else {
        cout << " Incorrect. Correct answer: " << correctAnswer << "\n";
        return false;
    }
}

int main() {
    int score = 0;
    int totalQuestions = 10;

    cout << " Welcome to the Quiz Game!\n";
    cout << "Answer the following questions:\n";

    if (askQuestion("1. What is the capital of India?", "New Delhi")) score++;
    if (askQuestion("2. Who developed the C++ programming language?", "Bjarne Stroustrup")) score++;
    if (askQuestion("3. What does CPU stand for?", "Central Processing Unit")) score++;
    if (askQuestion("4. How many runs Rishabh Pant Score in Last match?", "54")) score++;
    if (askQuestion("5. Which header file is needed use string in C++ ?", "#include<string>")) score++;
    if (askQuestion("6. What is the purpose of the return statement in a function?", "  To send a value back to the caller")) score++;
    if (askQuestion("7. 5*9+2-7=?", "40")) score++;
    if (askQuestion("8. Which is capital of India?", "Delhi")) score++;
    if (askQuestion("9. What is the Jurassic Park last movie name?", "Jurasic Park Rebirth")) score++;
    if (askQuestion("10. What is the full form of MSI?", "Micro-Star International")) score++;
    cout << "?? Quiz Completed!\n";
    cout << "Your Score: " << score << " out of " << totalQuestions << endl;

    return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
