/** pex03funcs.h
 * =========================================================== 
 * Name: your name
 * Section: your section
 * Project: assignment information 
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */

#include <stdbool.h>

void clearGameBoard(char board[8][8]);

void computerTakeTurn(char board[8][8]);

void displayGameBoard(char board[8][8]);

int getIntRange(int lowVal, int highVal);

int getIntSafe();

bool legalPlay(char board[8][8], int column);

void placePiece(char board[8][8], char piece, int column);

void userTakeTurn(char board[8][8]);

int getWinner(char board[8][8]);
