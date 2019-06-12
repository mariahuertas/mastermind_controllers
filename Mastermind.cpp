#include "Mastermind.h"

MasterMind::MasterMind(){
    this->logic = new Logic();
}

MasterMind::~MasterMind(){
    delete this->logic;
}

void MasterMind::play(){
   Controller *controller;
    std::cout << "Welcome. Each round, insert 4 colors"<< std::endl;
    do{
        controller = this->logic->getController();
        if (controller!=nullptr){
            controller->control();
        }
    } while (controller!=nullptr);
}
