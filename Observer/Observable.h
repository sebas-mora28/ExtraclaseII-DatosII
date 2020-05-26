//
// Created by david on 14/3/20.
//

#ifndef OBSERVER_OBSERVABLE_H
#define OBSERVER_OBSERVABLE_H

#include "Observer.h"
#include <bits/stdc++.h>

using namespace std;

class Observable {
public:
    vector<Observer *> observers;

    virtual void notify() = 0;

    virtual void add(Observer* bank) = 0;

    virtual void remove(Observer* bank) = 0;

};


#endif //OBSERVER_OBSERVABLE_H
