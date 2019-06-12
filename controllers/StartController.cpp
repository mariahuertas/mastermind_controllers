#include "StartController.h"

StartController::StartController(Game *game):Controller(game){}
void StartController::printSecretCombination(){
    return this->game->printSecretCombination();
}

void StartController::generateMisteryColours(){
    return this->game->generateMisteryColours();
}

void StartController::control(){
    this->generateMisteryColours();
    this->printSecretCombination();
    this->setState(IN_GAME);
}
