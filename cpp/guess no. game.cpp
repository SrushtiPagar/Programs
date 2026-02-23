#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    // Generate a random number between 1 and 100
    srand(time(0));
    int secretNumber = rand() % 100 + 1;

    // Start the timer
    auto startTime = high_resolution_clock::now();

    // Prompt the user to guess the number
    cout << "Guess the number between 1 and 100: ";
    int guess;
    cin >> guess;

    // Loop until the user guesses the correct number
    while (guess != secretNumber) {
        if (guess < secretNumber) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Too high! Try again: ";
        }
        cin >> guess;
    }

    // End the timer when the correct number is guessed
    auto endTime = high_resolution_clock::now();

    // Calculate the time taken to guess
    auto duration = duration_cast<seconds>(endTime - startTime);

    cout << "Congratulations! You guessed the number in " << duration.count() << " seconds." << endl;

    return 0;
}
