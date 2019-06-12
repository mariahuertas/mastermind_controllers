#include "proposedcombination.h"

ProposedCombination::ProposedCombination():Combination()
{
    secretCombination = new SecretCombination();
    result = new Result();
}

ProposedCombination::~ProposedCombination(){
    delete secretCombination;
    delete result;
}

void ProposedCombination::read(){
    char value = ' ';
        char *combination;
        combination = new char [4];
        for(int i=0; i<4; i++){
            do{
                cout << "Inserta el color "<< i+1 <<": ";
                cin >> value;
                value = toupper(value);
            } while(color->isColor(value));

        combination[i] = value;
        }
    setCombination(combination);

}

void ProposedCombination::print(){
    char *proposedCombination = new char [4];
    proposedCombination = getCombination();
    cout<< "Proposed colours: ";
    for (int i=0; i<colors; i++){
        cout << "|" << proposedCombination[i] << "|";
    }
    cout<<"/"<<"Black: "<<result->getBlackToken()<<" White: "<< result->getWhiteToken();
    cout<<endl;
}

void ProposedCombination::calculateResult(SecretCombination *secretCombination){
    char *combination = secretCombination->getCombination();

    for (int i=0; i<colors; i++){

    if (combination[i]==this->combination[i])
        result->incrementBlackToken();

    else{
        for (int j=0; j<colors; j++)
            if (combination[i]==this->combination[j] &&
                    (combination[j]!=this->combination[j]))
            result->incrementWhiteToken();
        }
    }
}

bool ProposedCombination:: isWinner(){
    return (result->getBlackToken())==colors ? true:false;
}
