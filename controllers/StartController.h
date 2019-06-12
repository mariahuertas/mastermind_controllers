#ifndef STARTCONTROLLER_H
#define STARTCONTROLLER_H
#include "Controller.h"
#include "ColocateController.h"
#include "models/Game.h"

class StartController : public Controller
{
public:
    void control();
    StartController(Game *game);
    void generateMisteryColours();
    void printSecretCombination();

};

#endif // STARTCONTROLLER_H
