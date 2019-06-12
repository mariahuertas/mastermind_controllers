#ifndef COLOCATECONTROLLER_H
#define COLOCATECONTROLLER_H
#include "Controller.h"
#include "models/Game.h"
#include "iostream"

class ColocateController : public Controller{
public:
    ColocateController(Game *game);
    void control() override;
    bool isWinner();
    void read();
    void calculateResult();
    void print();
    void incrementTurn();
    int getTurn();
};

#endif // COLOCATECONTROLLER_H
