#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(0));

    char playAgain;
    
    do {
        int secretNumber = rand() % 100 + 1;
        int guess;
        int attempts = 0;

        cout << "Welcome to the Guessing Number Game!\n";
        cout << "I have chosen a number between 1 and 100. Can you guess what it is?\n\n";

        do {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;
            
            if (guess == secretNumber)
			{
                cout << "Congratulations! You've guessed the correct number in " << attempts << " attempts!\n";
                break;
            } else if (guess < secretNumber) {
                cout << "Too low! Try guessing a higher number.\n";
            } else {
                cout << "Too high! Try guessing a lower number.\n";
            }

        } while (true);

        cout << "Do you want to play again? (Y/N): ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "Thanks for playing!\n";

    return 0;
}
