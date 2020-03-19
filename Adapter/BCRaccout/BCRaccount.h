//
// Created by sebasmora on 18/3/20.
//

#ifndef EXTRACLASEII_DATOSII_BCRACCOUT_H
#define EXTRACLASEII_DATOSII_BCRACCOUT_H

#include <iostream>

class BCRaccout{
public:

    BCRaccout();

    BCRaccout(std::string name, std::string lastName, int pin, int dinamicKey, int numberIvan);

    std::string getLastName() const;

    int getPin() const;

    int getDinamicKey() const;

    int getNumberIvan() const;

    std::string getName() const;

private:
    std::string name;
    std::string lastName;
    int PIN;
    int DinamicKey;
    int NumberIVAN;

public:




};

#endif //EXTRACLASEII_DATOSII_BCRACCOUT_H
