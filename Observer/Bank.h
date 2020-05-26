//
// Created by david on 26/5/20.
//

#ifndef EXTRACLASEII_DATOSII_BANK_H
#define EXTRACLASEII_DATOSII_BANK_H

#include "Observable.h"
#include "Observer.h"
#include "SingletonBank.h"
#include "CentralBank.h"
class Bank : public Observer{
public:
    Bank(CentralBank* bank);
    ~Bank() = default;
    float exchange;

    void update();

    CentralBank *centralBank;
};


#endif //EXTRACLASEII_DATOSII_BANK_H
