#include "Controller.h"

Controller::Controller(Game *game){
    assert (game != nullptr);
    this->game = game;
}

void Controller::setState(State state){
    return this->game->setState(state);
}

