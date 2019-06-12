#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "models/Game.h"
#include "State.h"

class Controller
{
public:
    Controller(Game *game);
    void setState(State state);
    virtual void control()=0;

protected:
    Game *game;
};

#endif // CONTROLLER_H


