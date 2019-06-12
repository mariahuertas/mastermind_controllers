#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "game.h"
#include "state.h"


class Controller
{
public:
    virtual void control()=0;

protected:
    Controller(Game *game);
    State getState();
    void setState(State state);
    Game getGame();
    Game *game;
};

#endif // CONTROLLER_H


