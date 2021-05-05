#pragma once
#include "acumulador.h"
#include <vector>
#include <iostream>

template <typename T>
class Logger {
	std::vector<Acumulador<T>*> acumuladores;
public:
	Logger(const std::vector<Acumulador<T>*>& acumuladores) :
		acumuladores(acumuladores) { }
	
	void log(const T& t) {
		for (Acumulador<T>* a : acumuladores) {
			a->push(t);
			std::cout<<a->total()<<"\t";
		}
		std::cout<<std::endl;
	}
};
