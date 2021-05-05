#include "logger.h"
#include "acumulador-ultimo.h"
#include "acumulador-maximo.h"
#include "acumulador-suma.h"
#include "acumulador-variacion.h"
#include <iostream>
#include <complex>
#include <vector>

 
int main(int argc, char** argv) {
	AcumuladorUltimo<float> ac_ultimo;
	AcumuladorMaximo<float> ac_maximo;
	AcumuladorSuma<float> ac_suma(0.0f);
	AcumuladorVariacion<float> ac_variacion;
	std::vector<Acumulador<float>*> acs(4);
	acs[0] = &ac_ultimo;
	acs[1] = &ac_maximo;
	acs[2] = &ac_suma;
	acs[3] = &ac_variacion;

	Logger<float> logger(acs);
	logger.log(5.0f);
	logger.log(-1.0f);
	logger.log(2.0f);
	logger.log(3.0f);
	logger.log(3.2f);
}
