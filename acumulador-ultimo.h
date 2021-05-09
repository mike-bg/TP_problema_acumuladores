#pragma once
#include "acumulador.h"

template <typename T>
class AcumuladorUltimo : public Acumulador<T> {
    T t;
public:
    void push(const T& e) { t = e; }
    T total() const { return t; }
};