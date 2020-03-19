#include <iostream>
#include "Adapter/BCRaccout/BCRaccount.h"
#include "Adapter/BankAccount/BankAccount.h"
#include "Adapter/BCRaccout/AdapterBCRaccount.h"
#include "Adapter/CajeroAutomatico.h"


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


    







}
