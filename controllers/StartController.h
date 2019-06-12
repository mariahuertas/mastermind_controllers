#ifndef STARTCONTROLLER_H
#define STARTCONTROLLER_H
#include "Controller.h"
#include "ColocateController.h"
#include "models/Game.h"

class StartController : public Controller
{
public:
    StartController(Game *game);
    void control() override;
    void generateMisteryColours();
    void printSecretCombination();
};

#endif // STARTCONTROLLER_H
