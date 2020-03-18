cmake_minimum_required(VERSION 3.15)
project(ExtraclaseII_DatosII)

set(CMAKE_CXX_STANDARD 14)

add_executable(ExtraclaseII_DatosII main.cpp Adapter/NewUser.cpp Adapter/User.h Adapter/User.h Adapter/User.cpp
               Observer/Observable.cpp Observer/Observable.h Observer/Observer.cpp Observer/Observer.h)