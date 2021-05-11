#pragma once
#include "logger.h"
#include "acumulador-ultimo.h"
#include "acumulador-maximo.h"
#include "acumulador-suma.h"
#include "acumulador-variacion.h"
#include <iostream>
#include <complex>
#include <vector>

int main(int argc, char** argv) {
    AcumuladorUltimo<int> ac_ultimo;
	AcumuladorMaximo<int> ac_maximo;
	AcumuladorSuma<int> ac_suma(0);
	AcumuladorVariacion<int> ac_variacion;
	std::vector<Acumulador<int>*> acs(4);

    acs[0] = &ac_ultimo;
    acs[1] = &ac_maximo;
	acs[2] = &ac_suma;
	acs[3] = &ac_variacion;

    Logger<int> logger(acs);
    logger.log(5);
    logger.log(-1);	
	logger.log(2);	
	logger.log(3);	
	logger.log(3);
}