#ifndef LOGIC_H
#define LOGIC_H
#include "models/Game.h"
#include "controllers/ColocateController.h"
#include "controllers/StartController.h"
#include "controllers/ContinueController.h"
#include "State.h"

class Logic{
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


