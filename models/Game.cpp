#include "Game.h"

Game::Game()
{
    this->state = INITIAL;
    turn = 0;
    secretCombination = new SecretCombination();
    proposedCombination = new ProposedCombination *[MAX_PROPOSED_COMBINATION];
    for (int i = 0; i< MAX_PROPOSED_COMBINATION; i++){
       proposedCombination[i]= new ProposedCombination();
    }
}

Game::~Game(){
    delete []secretCombination;
    //delete[]proposedCombination;
}

State Game::getState() {
    return state;
}

void Game::setState(State state){
    this->state = state;
}

void Game:: read() {
    proposedCombination[getTurn()]->read();
}

int Game::getTurn(){
    return turn;
}

bool Game::isWinner(){
    return proposedCombination[getTurn()]->isWinner();
}

void Game::print(){
    cout<<endl;
    for (int i=0; i<getTurn()+1; i++)
    proposedCombination[getTurn()]->print();
}

void Game::printSecretCombination(){
    secretCombination->print();
}

void Game::incrementTurn(){
    turn++;
}

void Game::calculateResult(){
    proposedCombination[getTurn()]->calculateResult(secretCombination);
}

void Game::generateMisteryColours(){
    secretCombination->generateMisteryColours();
}

void Game::clear(){
    turn=0;
}
