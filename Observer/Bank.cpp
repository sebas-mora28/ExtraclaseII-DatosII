//
// Created by david on 26/5/20.
//

#include "Bank.h"


void Bank::update() {
    exchange = centralBank->getExchange();
    std::cout << "Updated dollar Exchange rate." << std::endl;
}

Bank::Bank(CentralBank* bank) {
    centralBank = bank;
    exchange = centralBank->getExchange();
}
