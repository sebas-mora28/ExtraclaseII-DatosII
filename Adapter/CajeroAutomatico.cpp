//
// Created by sebasmora on 18/3/20.
//

#include "CajeroAutomatico.h"


CajeroAutomatico::CajeroAutomatico(BankAccount &bankAccount) {
    std::cout << "EL NOMBRE DEL TITULAR ES: " << bankAccount.name() << "\n";
    std::cout << "EL PIN DE LA TARJETA ES: " << bankAccount.PIN() << "\n";
    std::cout << "El NUMERO DE CUENTA ES: " << bankAccount.AccoutNumber() << "\n";
}


