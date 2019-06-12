#ifndef COLOCATECONTROLLER_H
#define COLOCATECONTROLLER_H
#include "controller.h"
#include "models/game.h"
#include "iostream"
using namespace std;

class ColocateController : public Controller
{
public:
    void control();
    ColocateController(Game *game);
    bool isWinner();
    void read();
    void calculateResult();
    void print();
    void incrementTurn();
    int getTurn();
};

#endif // COLOCATECONTROLLER_H
