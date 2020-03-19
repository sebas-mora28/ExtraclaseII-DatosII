//
// Created by sebasmora on 18/3/20.
//
#include "AdapterBCRaccount.h"

AdapterBCRaccount::AdapterBCRaccount(BCRaccout *bcRaccout){
        this->bcRaccount = bcRaccout;
    }

    std::string AdapterBCRaccount::name(){
        std::cout << "INGRESA A ESTABLECER EL NOMBRE EN EL ADAPTER" << "\n";
        return bcRaccount->getName() + bcRaccount->getLastName();
    }

    int AdapterBCRaccount::PIN(){
        std::cout << "INGRESA A ESTABLECER EL PIN EN EL ADAPTER" << "\n";
        std::cout << bcRaccount->getPin()  << "  " << bcRaccount->getDinamicKey() << "\n";
        return bcRaccount->getPin();
    }

    int AdapterBCRaccount::AccoutNumber(){
        std::cout << "INGRESA A ESTABLECER EL NUMERO DE CUENTA EN EL ADAPTER" << "\n";
        return bcRaccount->getNumberIvan();
    }



