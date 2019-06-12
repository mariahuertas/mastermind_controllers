#include "colocatecontroller.h"

ColocateController::ColocateController(Game *game):Controller(game){
}

void ColocateController::control(){
    //assert
    this->read();
    this->calculateResult();
    this->print();
    if (this->isWinner()){
        cout << "GANADOR"<<endl;
        this->setState(FINAL);
    }

    else if (this->getTurn()==10){
        cout << "OOOOOOOOH"<< endl;
        this->setState(FINAL);
    }

    else
        this->incrementTurn();
}


void ColocateController:: print(){
    return game->print();
}
void ColocateController:: incrementTurn(){
    return game->incrementTurn();
}
void ColocateController::read(){
    return game->read();
}

void ColocateController:: calculateResult(){
    return game->calculateResult();
}
bool ColocateController:: isWinner(){
    return game->isWinner();
}


int ColocateController::getTurn(){
    return game->getTurn();
}

