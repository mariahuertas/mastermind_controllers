#ifndef STARTCONTROLLER_H
#define STARTCONTROLLER_H
#include "controller.h"
#include "colocatecontroller.h"
#include "models/game.h"

class StartController : public Controller
{
public:
    void control();
    StartController(Game *game);
    void generateMisteryColours();
    void printSecretCombination();

};

#endif // STARTCONTROLLER_H
