
#include "BCRaccount.h"


BCRaccout::BCRaccout()=default;

BCRaccout::BCRaccout(std::string name, std::string lastName, int pin, int dinamicKey, int numberIvan) : name(name),
                                                                                            lastName(lastName),
                                                                                            PIN(pin),DinamicKey(dinamicKey),
                                                                                            NumberIVAN(numberIvan) {}

std::string BCRaccout::getName() const {
    return name;
}

std::string BCRaccout::getLastName() const {
    return lastName;
}

int BCRaccout::getPin() const {
    return PIN;
}

int BCRaccout::getDinamicKey() const {
    return DinamicKey;
}

int BCRaccout::getNumberIvan() const {
    return NumberIVAN;
}
