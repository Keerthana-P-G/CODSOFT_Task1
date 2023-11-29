//     NUMBER GUESSING GAME    //
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int targetNumber = rand() % 100 + 1;

    int userGuess;
    int numberOfAttempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Try to guess the number between 1 and 100.\n\n";

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;

        numberOfAttempts++;

        if (userGuess == targetNumber) {
            cout << "Congratulations! You guessed the number in " << numberOfAttempts << " attempts.\n";
        } else if (userGuess < targetNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Too high! Try again.\n";
        }

    } while (userGuess != targetNumber);

    return 0;
}
