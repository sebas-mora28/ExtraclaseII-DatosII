//
// Created by sebasmora on 18/3/20.
//

#ifndef EXTRACLASEII_DATOSII_BANCKACCOUT_H
#define EXTRACLASEII_DATOSII_BANCKACCOUT_H

#include <iostream>
class BankAccount{

public:
    virtual std::string name()=0;

    virtual int PIN()=0;

    virtual int AccoutNumber()=0;
};

#endif //EXTRACLASEII_DATOSII_BANCKACCOUT_H
