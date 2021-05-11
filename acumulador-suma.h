#pragma once
#include "acumulador.h"
#include <iostream>
#include <vector>


template <typename T>
class AcumuladorSuma : public Acumulador<T> {
    T t;
public:
    AcumuladorSuma(const T& e) : t(e) {}
    
    void push(const T& e) { t += e; }
    T total() const { return t; }
};


template <typename T>
class AcumuladorSuma<std::vector<T> > : public Acumulador<std::vector<T> > {
    std::vector<T> t;
public:
    AcumuladorSuma(const std::vector<T>& v) : t(v) {}
    void push(const std::vector<T>& that) {
        for (int = 0; i < int( std::min( t.size(), that.size() ) ); i++) {
            t[i] += that[i];
        }
    }

    std::vector<T> total() const { return t; }
};


//Especializamos para std::vector<float>
template<>
class AcumuladorSuma<std::vector<float> > : public Acumulador<std::vector<float> > {
	std::vector<float> t;
public:
	AcumuladorSuma(const std::vector<float>& t) : t(t) { }
	void push(const std::vector<float>& that) {
	       for (int i = 0; i<std::min(t.size(),that.size()); ++i) this->t[i] += that[i];
	}
	std::vector<float> total() const       { return this->t; }

};
