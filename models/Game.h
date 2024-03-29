#ifndef GAME_H
#define GAME_H
#include "ProposedCombination.h"
#include "SecretCombination.h"
#include "controllers/State.h"

class Game
{
public:
    Game();
    ~Game();
    State getState();
    void setState(State state);
    void read();
    int getTurn();
    bool isWinner();
    void print();
    void printSecretCombination();
    void incrementTurn();
    void calculateResult();
    void generateMisteryColours();
    void clear();

private:
    const static int MAX_PROPOSED_COMBINATION = 10;
    SecretCombination *secretCombination;
    ProposedCombination **proposedCombination;
    State state;
    int turn;
};

#endif // GAME_H
