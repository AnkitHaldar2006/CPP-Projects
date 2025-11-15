#include <iostream>
#include <string>
using namespace std;

int main() {
    // Riddles and answers
    string riddles[] = {
        "What has keys but can't open locks?",
        "The more you take, the more you leave behind. What am I?",
        "What gets wetter the more it dries?",
        "I speak without a mouth and hear without ears. What am I?"
    };

    string answers[] = {"piano", "footsteps", "towel", "echo"};

    int totalRiddles = 4;
    int score = 0;

    cout << "=== Welcome to the Riddle Game ===\n";
    cout << "Answer the riddles to earn points!\n\n";

    for (int i = 0; i < totalRiddles; i++) {
        cout << "Riddle " << (i + 1) << ": " << riddles[i] << "\n";
        cout << "Your answer: ";
        string user;
        getline(cin, user);

        if (user == answers[i]) {
            cout << "✅ Correct! You earn 10 points.\n\n";
            score += 10;
        } else {
            cout << "❌ Wrong! The correct answer was: " << answers[i] << "\n\n";
        }
    }

    cout << "=== Game Over ===\n";
    cout << "Your total score: " << score << " points\n";

    // Win/Lose system
    if (score >= 30) {
        cout << "🎉 You win! Great job!\n";
    } else {
        cout << "😢 You lose! Better luck next time.\n";
    }

    return 0;
}