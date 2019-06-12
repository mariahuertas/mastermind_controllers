#include "combination.h"

Combination::Combination(){
    colors=4;
    combination = new char [colors];
}

Combination::~Combination(){
    delete[] combination;
}

char *Combination::getCombination(){
    return combination;
}

void Combination::setCombination(char *combination){
    this->combination = combination;
}
