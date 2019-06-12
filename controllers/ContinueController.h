#ifndef CONTINUECONTROLLER_H
#define CONTINUECONTROLLER_H
#include "models/Game.h"
#include "Controller.h"

class ContinueController : public Controller{
public:
    ContinueController(Game *game);
    void control() override;
    void clear();
};

#endif // CONTINUECONTROLLER_H
