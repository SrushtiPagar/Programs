#include <iostream>
#include <vector>

using namespace std;

// Function to draw the Tic Tac Toe board
void drawBoard(const vector<char>& board) {
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
    cout << "-----------" << endl;
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout << "-----------" << endl;
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
}

// Function to check if a player has won
bool checkWin(const vector<char>& board, char player) {
    // Check rows
    for (int i = 0; i < 9; i += 3) {
        if (board[i] == player && board[i + 1] == player && board[i + 2] == player)
            return true;
    }
    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[i] == player && board[i + 3] == player && board[i + 6] == player)
            return true;
    }
    // Check diagonals
    if ((board[0] == player && board[4] == player && board[8] == player) ||
        (board[2] == player && board[4] == player && board[6] == player))
        return true;
    return false;
}

int main() {
    vector<char> board(9, ' ');

    char currentPlayer = 'X';
    int moves = 0;
    int position;

    cout << "Welcome to Tic Tac Toe!" << endl;

    while (moves < 9) {
        drawBoard(board);

        // Input position
        cout << "Player " << currentPlayer << ", enter your move (1-9): ";
        cin >> position;
        position--; // Adjust position to match array indexing

        // Check if position is valid
        if (position < 0 || position >= 9 || board[position] != ' ') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        // Make the move
        board[position] = currentPlayer;

        // Check for win
        if (checkWin(board, currentPlayer)) {
            drawBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        // Switch player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        moves++;
    }

    // If no one wins
    if (moves == 9) {
        drawBoard(board);
        cout << "It's a draw!" << endl;
    }

    return 0;
}

