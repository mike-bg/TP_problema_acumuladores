#pragma once
#include "acumulador.h"

template <typename T>
class AcumuladorVariacion : public Acumulador<T> {
    T t, t_ini;
    bool primero;
    std::chrono::system_clock::time_point start, now;
    
public:
    AcumuladorVariacion() : primero(true) {}

    void push(const T& e) {
        if (primero) {
            primero = false;
            t_ini = e;
            start = std::chrono::system_clock::now();
        }
        t = e;
        now = std::chrono::system_clock::now();
    }

    T total() const { return (t_ini - t)/std::chrono::duration<float>(start-now).count(); }
};