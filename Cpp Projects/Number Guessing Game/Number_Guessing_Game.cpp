#include <iostream>
#include <cstdlib>
#include <ctime>

void playGame() {
    int secretNumber, guess, attempts = 0;
    const int MAX_TRIES = 7;
    const int LOWER_BOUND = 1;
    const int UPPER_BOUND = 100;

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    secretNumber = std::rand() % (UPPER_BOUND - LOWER_BOUND + 1) + LOWER_BOUND;

    std::cout << "Guess the number between " << LOWER_BOUND << " and " << UPPER_BOUND << "!\n";

    while (attempts < MAX_TRIES) {
        std::cout << "Attempt " << (attempts + 1) << ": ";
        std::cin >> guess;

        if (std::cin.fail() || guess < LOWER_BOUND || guess > UPPER_BOUND) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input. Enter a number between " << LOWER_BOUND << " and " << UPPER_BOUND << ".\n";
            continue;
        }

        attempts++;

        if (guess == secretNumber) {
            std::cout << "🎉 Congratulations! You guessed the number in " << attempts << " tries.\n";
            return;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Too high! Try again.\n";
        }
    }

    std::cout << "😢 You've used all attempts. The number was " << secretNumber << ". Better luck next time!\n";
}

int main() {
    char choice;
    do {
        playGame();
        std::cout << "Play again? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    std::cout << "Thanks for playing!\n";
    return 0;
}