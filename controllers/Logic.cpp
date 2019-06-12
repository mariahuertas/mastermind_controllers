#include "Logic.h"

Logic::Logic()
{
    game = new Game();
    colocateController = new ColocateController(game);
    startController = new StartController(game);
    continueController = new ContinueController(game);
}

Controller *Logic::getController(){
    switch (game->getState()){

    case (INITIAL):
        //std::cout<<"Estado INITIAL"<< endl;
        return startController;
    case (IN_GAME):
        //std::cout<<"Estado IN GAME"<< endl;
        return colocateController;
    case (FINAL):
        //std::cout <<"Estado FINAL"<<endl;
        return continueController;
        case (EXIT):
    default:
        return NULL;
    }
}
