#include "Logic.h"

Logic::Logic(){
    this->game = new Game();
    this->colocateController = new ColocateController(game);
    this->startController = new StartController(game);
    this->continueController = new ContinueController(game);
}

Controller *Logic::getController(){
    switch (game->getState()){
    case (INITIAL):
        return startController;
    case (IN_GAME):
        return colocateController;
    case (FINAL):
        return continueController;
        case (EXIT):
    default:
        return nullptr;
    }
}
