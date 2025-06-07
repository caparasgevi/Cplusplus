#include <iostream>
using namespace std;

const int SIZE = 3;
char board[SIZE][SIZE];

// Initialize the board with empty spaces
void initializeBoard() {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            board[i][j] = ' ';
        }
    }
}

// Print the current state of the board
void printBoard() {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << board[i][j];
            if (j < SIZE - 1) cout << " | ";
        }
        cout << endl;
        if (i < SIZE - 1) cout << "--+---+--" << endl;
    }
}

// Check if the current player has won
bool checkWin(char player) {
    // Check rows and columns
    for (int i = 0; i < SIZE; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

// Check if the board is full
bool checkDraw() {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    char player = 'X';
    bool game_over = false;

    initializeBoard();

    while (!game_over) {
        printBoard();
        int row, col;

        // Get the move from the current player
        cout << "Player " << player << ", enter your move (row and column): ";
        cin >> row >> col;

        // Validate the move
        if (row < 1 || row > SIZE || col < 1 || col > SIZE || board[row-1][col-1] != ' ') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        // Place the move on the board
        board[row-1][col-1] = player;

        // Check for a win
        if (checkWin(player)) {
            printBoard();
            cout << "Player " << player << " wins!" << endl;
            game_over = true;
        } else if (checkDraw()) {
            printBoard();
            cout << "The game is a draw!" << endl;
            game_over = true;
        } else {
            // Switch players
            player = (player == 'X') ? 'O' : 'X';
        }
    }

    return 0;
}
