#ifndef COLOCATECONTROLLER_H
#define COLOCATECONTROLLER_H
#include "Controller.h"
#include "models/Game.h"
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
