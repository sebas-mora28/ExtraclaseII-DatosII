//
// Created by david on 26/5/20.
//

#ifndef EXTRACLASEII_DATOSII_SINGLETONBANK_H
#define EXTRACLASEII_DATOSII_SINGLETONBANK_H

#include "Observable.h"
#include "CentralBank.h"
class SingletonBank {
private:
    CentralBank* centralBank;
public:
    SingletonBank() = default;
    ~SingletonBank() = default;
    CentralBank* getCentralBank();
};


#endif //EXTRACLASEII_DATOSII_SINGLETONBANK_H
