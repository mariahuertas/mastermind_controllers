#ifndef LOGIC_H
#define LOGIC_H
#include "models/game.h"
#include "controllers/colocatecontroller.h"
#include "controllers/startcontroller.h"
#include "controllers/continuecontroller.h"
#include "state.h"

class Logic
{
public:
    Logic();
    Controller *getController();

private:
    Game *game;
    ColocateController *colocateController;
    StartController *startController;
    ContinueController *continueController;
};

#endif // LOGIC_H


