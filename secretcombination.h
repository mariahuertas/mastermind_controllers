#ifndef SECRETCOMBINATION_H
#define SECRETCOMBINATION_H
#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include "combination.h"
using namespace std;


class SecretCombination: public Combination
{
public:
    SecretCombination();
    ~SecretCombination();
    void generateMisteryColours ();
    void print();
};

#endif // SECRETCOMBINATION_H
