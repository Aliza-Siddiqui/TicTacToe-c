#include <stdio.h>

void displayBoard(char board[3][3]);
int checkWin(char board[3][3]);
void makeMove(char board[3][3], int player);

int main() {
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    int currentPlayer = 1, winner = 0, moves = 0;

    printf("\033[1;36mWelcome to Tic-Tac-Toe!\n\033[0m");
    printf("\033[1;33mPlayer 1: X\033[0m\n");
    printf("\033[1;32mPlayer 2: O\033[0m\n\n");

    while (moves < 9 && winner == 0) {
        displayBoard(board);
        makeMove(board, currentPlayer);
        moves++;
        winner = checkWin(board);

        if (winner == 0) {
            currentPlayer = (currentPlayer % 2) + 1; 
        }
    }

    displayBoard(board);

    if (winner == 1) {
        printf("\033[1;32mPlayer %d wins! Congratulations!\033[0m\n", currentPlayer);
    } else {
        printf("\033[1;31mIt's a draw! Well played!\033[0m\n");
    }

    return 0;
}

void displayBoard(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---         \n");
    }
    printf("\n");
}

int checkWin(char board[3][3]) {
    for (int i = 0; i < 3; i++) {

        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return 1;
        }
      
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return 1;
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return 1;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return 1;
    }
    return 0; 
}


void makeMove(char board[3][3], int player) {
    int choice;
    char mark = (player == 1) ? 'X' : 'O';

    while (1) {
        printf("Player %d, enter your move (1-9): ", player);
        scanf("%d", &choice);

      
        if (choice < 1 || choice > 9) {
            printf("\033[1;31mInvalid move. Try again.\033[0m\n");
            continue;
        }

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if (board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = mark;
            break;
        } else {
            printf("Spot already taken! Try a different move.\n");
        }
    }
}
