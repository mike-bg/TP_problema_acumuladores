#pragma once
#include "acumulador.h"

template <typename T>
class AcumuladorMaximo : public Acumulador<T> {
    T t;
    bool primero;
public:
    AcumuladorMaximo() : primero(true) {}
    
    void push(const T& e) {
        if ( primero || e > t ) {
            t = e; 
            primero = false;
        }
    }
    
    T total() const { return t; }
};