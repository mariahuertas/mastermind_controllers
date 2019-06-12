#ifndef MASTERMIND_H
#define MASTERMIND_H
#include "controllers/Logic.h"
#include <iostream>
#include <cstdlib>
#include <ctype.h>


class MasterMind
{
public:
   MasterMind();
   ~MasterMind();
   void play();

private:
    Logic *logic;
};

#endif