#pragma once
#include "acumulador.h"

template <typename T>
class AcumuladorMaximo : public Acumulador<T> {
	T t;
	bool first;
public:
	AcumuladorMaximo() : first(true) { }
	void push(const T& t) { if (first || (t>(this->t))) this->t = t; first=false; }
	T total() const       { return this->t; }
};
