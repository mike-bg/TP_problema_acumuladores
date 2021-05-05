#pragma once
#include "acumulador.h"

template <typename T>
class AcumuladorUltimo : public Acumulador<T> {
	T t;
public:
	void push(const T& t) { this->t = t; }
	T total() const       { return this->t; }
};
