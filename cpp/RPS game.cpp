#include <cstdlib> 
#include <ctime> 
#include <iostream> 
using namespace std; 
char getComputerMove() 
{ 
    int move;
    move = rand() % 3; 
    if (move == 0)
	{ 
        return 'p'; 
    } 
    else if (move == 1)
	{ 
        return 's'; 
    } 
    else
    {
    return 'r'; 
	}
} 
int getResults(char playerMove, char computerMove) 
{ 
    if (playerMove == computerMove)
	{
        return 0; 
    } 

    if (playerMove == 's' && computerMove == 'p')
	{ 
        return 1; 
    } 
    if (playerMove == 's' && computerMove == 'r')
	{ 
        return -1; 
    } 
    if (playerMove == 'p' && computerMove == 'r')
	{ 
        return 1; 
    } 
    if (playerMove == 'p' && computerMove == 's')
	{ 
        return -1; 
    } 
    if (playerMove == 'r' && computerMove == 'p')
	{ 
        return -1; 
    } 
    if (playerMove == 'r' && computerMove == 's')
	{ 
        return 1; 
    } 
    return 0; 
}  
int main() 
{ 
    char playerMove; 
    char playAgain;
    srand(time(NULL)); 
	cout << "Welcome to Stone Paper Scissor Game\n";
			do
			 {
        cout << "\n\tEnter r for ROCK, p for PAPER, and s for SCISSOR\n";  
        while(1) 
		{ 
            cin >> playerMove; 
            if (playerMove == 'p' || playerMove == 'r' || playerMove == 's') 
			{ 
                break; 
            } 
            else 
			{ 
                cout << "Invalid Player Move!!! Please Try Again.\n"; 
            } 
        } 
        char computerMove = getComputerMove(); 
		int result = getResults(playerMove, computerMove); 
		if (result == 0) 
		{ 
            cout << "\nGame Draw!\n"; 
        } 
        else if (result == 1) 
		{ 
            cout << "\nCongratulations! Player won the game!\n"; 
        } 
        else 
		{ 
            cout << "\nOh! Computer won the game!\n"; 
        }  
        cout << "\nYour Move: " << playerMove << endl; 
        cout << "Computer's Move: " << computerMove << endl; 

        cout << "\n\t\t\tDo you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
    
		return 0; 
	
}

