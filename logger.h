#pragma once
#include "acumulador.h"
#include <vector>
#include <iostream>

template <typename T>
class Logger {
    std::vector<Acumulador<T>*> acumuladores;

    Logger(const std::vector<Acumulador<T>*>& acumuladores) : acumuladores(acumuladores) {}

    void log(const T& e) {
        for (Acumulador<T>* a : acumuladores) {
            a->push(e);
            std::cout<< a->total() << "\t";
        }
        std::cout<<std::endl;
    }
};