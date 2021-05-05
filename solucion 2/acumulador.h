#pragma once

template <typename T>
class Acumulador {
public:
	virtual	void push(const T& t) = 0;
	virtual T total() const = 0;
};
