#include "ColocateController.h"

ColocateController::ColocateController(Game *game):Controller(game){}

void ColocateController::control(){
    this->read();
    this->calculateResult();
    this->print();
    if (this->isWinner()){
        std::cout << "GANADOR" << std::endl;
        this->setState(FINAL);
    }
    else if (this->getTurn()==10){
        std::cout << "OOOOOOOOH"<< std::endl;
        this->setState(FINAL);
    }
    else{
        this->incrementTurn();
    }
}

void ColocateController:: print(){
    return this->game->print();
}

void ColocateController::incrementTurn(){
    return this->game->incrementTurn();
}

void ColocateController::read(){
    return this->game->read();
}

void ColocateController::calculateResult(){
    return this->game->calculateResult();
}

bool ColocateController:: isWinner(){
    return this->game->isWinner();
}

int ColocateController::getTurn(){
    return this->game->getTurn();
}
