#include "Mastermind.h"

MasterMind::MasterMind(){
    logic = new Logic();
}

MasterMind::~MasterMind(){

}

void MasterMind::play(){
   Controller *controller;

    cout << "Bienvenido al mastermind. Por cada ronda, ingresa 4 colores"<< endl;

    do{
        controller = logic->getController();
        if (controller!=NULL){
            controller->control();
        }
    } while (controller!=NULL);
}
