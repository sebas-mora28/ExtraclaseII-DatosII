#include <iostream>
#include "Adapter/BCRaccout/BCRaccount.h"
#include "Adapter/BankAccount/BankAccount.h"
#include "Adapter/BCRaccout/AdapterBCRaccount.h"
#include "Adapter/CajeroAutomatico.h"

#include "Observer/CentralBank.h"
#include "Observer/Bank.h"
#include "Observer/SingletonBank.h"

int main() {

    //-----------------------------------------------------------------------------------------------------------
    //                                ADAPTER
                         std::cout << "PROBANDO ADAPTER " << "\n";
    //-----------------------------------------------------------------------------------------------------------


    //Adaptee
    BCRaccout* bcRaccout = new BCRaccout("Sebastian", "Mora", 2015, 8753144, 856247);

    //Adapter
    AdapterBCRaccount adapterBcRaccount(bcRaccout);

    //El cajero automatico solamente puede recibir interfaces que sea de tipo BankAccout, sin embargo BCRaccount es incompatible
    //con BankAccout por lo que se debe hacer uso del adapter
    CajeroAutomatico cajeroAutomatico(adapterBcRaccount);


    //-----------------------------------------------------------------------------------------------------------
    //                                OBSERVER
    std::cout << "\nPROBANDO OBSERVER\n" << std::endl;
    //-----------------------------------------------------------------------------------------------------------

    //Singleton (Not necessary)
    auto* singletonBank = new SingletonBank();
    //Observable
    CentralBank* BC = singletonBank->getCentralBank();

    //Observers
    //Se crean los bancos y se les indica cual es el banco central.
    Bank *BCR = new Bank(BC);
    Bank *BN = new Bank(BC);
    Bank *BAC = new Bank(BC);

    //Se añaden los bancos al banco central.
    BC->add(BCR);
    BC->add(BN);
    BC->add(BAC);

    //Se cambia el tipo de cambio del dolar y se notifica de inmediato a todos los bancos del cambio y se actualizan.
    BC->changeExchange(560.7);
}
