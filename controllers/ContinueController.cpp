#include "ContinueController.h"

ContinueController::ContinueController(Game * game):Controller(game){}

void ContinueController::control(){
    char choice;
    do{
        std::cout <<"¿Do you want to start a new game?" << std::endl;
        std::cin>>choice;
    } while (choice != 'Y' &&choice != 'y' &&choice != 'N' &&choice != 'n' );
    if (choice=='Y' || choice=='y'){
        this->clear();
        this->setState(INITIAL);
    }
    else{
        this->setState(EXIT);
    }
}

void ContinueController::clear(){
    return game->clear();
}
