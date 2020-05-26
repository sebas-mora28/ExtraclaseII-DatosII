//
// Created by david on 26/5/20.
//

#include "SingletonBank.h"

CentralBank *SingletonBank::getCentralBank() {
    if(centralBank == nullptr){
        centralBank = new CentralBank();
    }
    return centralBank;
}
