#ifndef CONTINUECONTROLLER_H
#define CONTINUECONTROLLER_H
#include "models/game.h"
#include "controller.h"

class ContinueController : public Controller
{
public:
    ContinueController(Game *game);
    void control();
    void clear();
};

#endif // CONTINUECONTROLLER_H
