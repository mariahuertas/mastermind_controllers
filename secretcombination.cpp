#include "secretcombination.h"

SecretCombination::SecretCombination():Combination(){
}

SecretCombination::~SecretCombination(){
}

void SecretCombination::generateMisteryColours (){
    char *enumClassArray = new char[colors];
    char *secretCombination = new char[colors];
    color->values(enumClassArray);
    int j=0;
    for (int i = 0; i < colors; i++){
        j=color->randomEnum();
        secretCombination[i] = enumClassArray[j];
    }
    setCombination(secretCombination);
}

void SecretCombination::print(){
    char *secretCombination = new char [4];
    secretCombination = getCombination();
    cout<< "Mistery colours: ";
    for (int i=0; i<4; i++){
        cout <<  secretCombination[i] <<" ";
    }
    cout<<endl;
}
