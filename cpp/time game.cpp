#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string name;
    char playAgain;
    srand(time(0));

    cout << "\nWelcome to the Guessing Number Game!\n";
    cout << "\nEnter your name: ";
    cin >> name;

    do
    {
        cout << "\nI have chosen a number between 1 and 100. Can you guess what it is?\n";
        int number = (rand() % 100) + 1;
        int guess;
        int attempt = 0;
        time_t startTime, endTime;
        time(&startTime);

        do
        {
            cout << "\nGuess a number: ";
            cin >> guess;
            attempt++;

            if (number > guess)
            {
                cout << "\nGuess higher number..\n";
            }
            else if (number < guess)
            {
                cout << "\nGuess lower number..\n";
            }
            else
            {
                time(&endTime);
                double elapsedTime = difftime(endTime, startTime);
                cout << "Congratulations! " << name << " You've guessed the correct number in " << attempt << " attempts!\n";
                cout << "\n" << name << ", your score is: " << 100 - (5 * attempt);
                cout << "\nTime taken: " << elapsedTime << " seconds\n";
                break;
            }
        } while (number != guess);

        cout << "\nDo you want to play again? (Y/N): ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "Thanks for playing...!\n";
    return 0;
}
