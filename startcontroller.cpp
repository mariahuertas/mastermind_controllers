#include "startcontroller.h"

StartController::StartController(Game *game):Controller(game)
{

}
void StartController::printSecretCombination(){
    return game->printSecretCombination();
}
void StartController::generateMisteryColours(){
    return game->generateMisteryColours();
}

void StartController::control(){
    //assert
    this->generateMisteryColours();
    this->printSecretCombination();
    this->setState(IN_GAME);
}
