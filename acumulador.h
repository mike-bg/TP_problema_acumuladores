#pragma once

template <typename T> 
class Acumulador {
public:
    virtual void push(const T& e) = 0;
    T total() const = 0;
};