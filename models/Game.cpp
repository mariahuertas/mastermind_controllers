#include "Game.h"

Game::Game(){
    this->state = INITIAL;
    this->turn = 0;
    this->secretCombination = new SecretCombination();
    this->proposedCombination = new ProposedCombination *[MAX_PROPOSED_COMBINATION];
    for (int i = 0; i< MAX_PROPOSED_COMBINATION; i++){
        this->proposedCombination[i]= new ProposedCombination();
    }
}

Game::~Game(){
    delete []this->secretCombination;
    delete []this->proposedCombination;
}

State Game::getState() {
    return this->state;
}

void Game::setState(State state){
    this->state = state;
}

void Game:: read() {
    this->proposedCombination[getTurn()]->read();
}

int Game::getTurn(){
    return this->turn;
}

bool Game::isWinner(){
    return this->proposedCombination[getTurn()]->isWinner();
}

void Game::print(){
    for (int i=0; i<getTurn()+1; i++)
        this->proposedCombination[getTurn()]->print();
}

void Game::printSecretCombination(){
    this->secretCombination->print();
}

void Game::incrementTurn(){
    this->turn++;
}

void Game::calculateResult(){
    this->proposedCombination[getTurn()]->calculateResult(this->secretCombination);
}

void Game::generateMisteryColours(){
    this->secretCombination->generateMisteryColours();
}

void Game::clear(){
    this->turn=0;
}
