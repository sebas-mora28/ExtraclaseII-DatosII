//
// Created by david on 26/5/20.
//

#ifndef EXTRACLASEII_DATOSII_CENTRALBANK_H
#define EXTRACLASEII_DATOSII_CENTRALBANK_H
#include <bits/stdc++.h>
#include "Observable.h"
#include "Observer.h"

class CentralBank : public Observable {
private:
    float exchange;
    std::vector<Observer *> observers;
public:
    CentralBank() {exchange = 500.0;};
    ~CentralBank() = default;
    void add(Observer *bank);
    void remove(Observer *bank);
    void notify();
    float getExchange() const;
    void changeExchange(float val);
};



#endif //EXTRACLASEII_DATOSII_CENTRALBANK_H
