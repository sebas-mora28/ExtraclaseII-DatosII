//
// Created by david on 26/5/20.
//

#include "CentralBank.h"


void CentralBank::add(Observer *bank) {
    observers.push_back(bank);
    bank->update();
}

void CentralBank::remove(Observer *bank) {

}

void CentralBank::notify() {
    for (auto &bank : observers) {
        bank->update();
        std::cout << "Notified change to the banks.\n" << std::endl;
    }
}

float CentralBank::getExchange() const {
    return exchange;
}

void CentralBank::changeExchange(float val) {
    std::cout << "Changed dollar Exchange rate to: " << val << "\n" <<std::endl;
    exchange = val;
    notify();
}