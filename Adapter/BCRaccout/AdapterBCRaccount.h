//
// Created by sebasmora on 18/3/20.
//

#ifndef EXTRACLASEII_DATOSII_ADAPTERBCRACCOUNT_H
#define EXTRACLASEII_DATOSII_ADAPTERBCRACCOUNT_H
#include "../BankAccount/BankAccount.h"
#include "BCRaccount.h"
#include <iostream>

class AdapterBCRaccount: public BankAccount{

    BCRaccout* bcRaccount;

public:
    AdapterBCRaccount(BCRaccout *bcRaccout);

    std::string name();

    int PIN();

    int AccoutNumber();
};

#endif //EXTRACLASEII_DATOSII_ADAPTERBCRACCOUNT_H
