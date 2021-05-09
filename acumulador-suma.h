#pragma once
#include "acumulador.h"

template <typename T>
class AcumuladorSuma : public Acumulador<T> {
    T t;
    
    AcumuladorSuma(const T& e) : t(e) {}
    
    void push(const T& e) { t += e; }
    T total() const { return t; }
};