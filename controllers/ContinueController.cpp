#include "ContinueController.h"

ContinueController::ContinueController(Game * game):Controller(game)
{

}

void ContinueController::control(){
    //assert
    char respuesta;
    do{
    std::cout <<"¿Desea empezar una nueva partida"<<endl;
    std::cin>>respuesta;
} while (respuesta != 'Y' &&respuesta != 'y' &&respuesta != 'N' &&respuesta != 'n' );
    if (respuesta=='Y' || respuesta=='y'){
    this->clear();
    this->setState(INITIAL);}

    else this->setState(EXIT);

}

void ContinueController::clear(){
    return game->clear();
}
