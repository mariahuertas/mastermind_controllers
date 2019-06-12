#ifndef MASTERMIND_H
#define MASTERMIND_H
#include "logic.h"
#include <iostream>
#include <cstdlib>
#include <ctype.h>
#endif

using namespace std;


class MasterMind
{
public:
   MasterMind();
   ~MasterMind();
   void play();

private:
    Logic *logic;
};
