cmake_minimum_required(VERSION 3.15)
project(ExtraclaseII_DatosII)

set(CMAKE_CXX_STANDARD 14)

add_executable(ExtraclaseII_DatosII main.cpp Adapter/BankAccount/BankAccount.h Adapter/BCRaccout/BCRaccount.cpp Adapter/BCRaccout/BCRaccount.h Adapter/BCRaccout/AdapterBCRaccount.cpp Adapter/CajeroAutomatico.cpp Adapter/CajeroAutomatico.h
        Observer/Observable.h Observer/Observer.h Observer/Bank.cpp Observer/Bank.h Observer/CentralBank.cpp Observer/CentralBank.h Observer/SingletonBank.cpp Observer/SingletonBank.h)