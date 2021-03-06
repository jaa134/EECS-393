#include "tictactoegameservice.h"

TicTacToeGameService::TicTacToeGameService()
{ }

void TicTacToeGameService::reset(Game::Difficulty difficulty) {
    currentPoints = 0;

    //update the number of points required to win
    if (difficulty == Game::Difficulty::Easy)
        pointsToWin = 4;
    if (difficulty == Game::Difficulty::Medium)
        pointsToWin = 6;
    if (difficulty == Game::Difficulty::Hard)
        pointsToWin = 8;

    newBoard();
}

void TicTacToeGameService::newBoard() {
    //create a new board
    for(int row = 0; row < rowWidth; row++)
        for (int col = 0; col < colHeight; col++)
            board[row][col] = default_symbol;
}

TicTacToeGameService::MoveOutcome TicTacToeGameService::makeMove(char symbol, int row, int col) {
    //if the board already has a move at a spot, the move is invalid
    if (board[row][col] != default_symbol)
        return Invalid;

    board[row][col] = symbol;

    //test if match is over by winner
    bool isOver = boardHasThreeInRow();
    if (isOver && symbol == player_symbol)
        return Win;
    if (isOver && symbol == cpu_symbol)
        return Loss;

    //test if tie
    bool hasMovesLeft = false;
    for(int row = 0; row < rowWidth; row++)
        for (int col = 0; col < colHeight; col++)
            if (board[row][col] == default_symbol)
                hasMovesLeft = true;
    if (!hasMovesLeft)
        return Tie;

    return Inconclusive;
}

bool TicTacToeGameService::boardHasThreeInRow() {
    //winner if three consecutive similar symbols in any direction
    return areSameValue(board[0][0], board[0][1], board[0][2])
        || areSameValue(board[1][0], board[1][1], board[1][2])
        || areSameValue(board[2][0], board[2][1], board[2][2])
        || areSameValue(board[0][0], board[1][0], board[2][0])
        || areSameValue(board[0][1], board[1][1], board[2][1])
        || areSameValue(board[0][2], board[1][2], board[2][2])
        || areSameValue(board[0][0], board[1][1], board[2][2])
        || areSameValue(board[0][2], board[1][1], board[2][0]);
}

bool TicTacToeGameService::areSameValue(char sq1, char sq2, char sq3) {
    //check if symbols are the same and not blank
    return sq1 == sq2
        && sq1 == sq3
        && sq1 != default_symbol
        && sq2 != default_symbol
        && sq3 != default_symbol;
}

TicTacToeGameService::MoveOutcome TicTacToeGameService::playerMove(int row, int col) {
    // make a move and do something with its outcome
    MoveOutcome outcome = makeMove(player_symbol, row, col);
    if (outcome != Invalid) {
        if (outcome == Win)
            currentPoints += 2;
        if (outcome == Tie)
            currentPoints += 1;
        if (outcome == Loss)
            currentPoints += 0;
    }

    return outcome;
}

TicTacToeGameService::MoveOutcome TicTacToeGameService::computerMove() {
    //make a random valid move
    MoveOutcome outcome;
    int row = 0;
    int col = 0;
    srand(time(NULL));
    do {
        row = rand() % rowWidth;
        col = rand() % colHeight;
    } while ((outcome = makeMove(cpu_symbol, row, col)) == Invalid);

    //do something with the outcome of the move
    if (outcome == Win)
        currentPoints += 2;
    if (outcome == Tie)
        currentPoints += 1;
    if (outcome == Loss)
        currentPoints += 0;

    return outcome;
}
