#include "logger.h"
#include "acumulador-ultimo.h"
#include "acumulador-maximo.h"
#include "acumulador-suma.h"
#include "acumulador-variacion.h"
#include <iostream>
#include <complex>
#include <vector>

 
int main(int argc, char** argv) {
	AcumuladorUltimo<std::complex<float> > ac_ultimo;
//	AcumuladorMaximo<std::complex<float>> ac_maximo; <-- Esta línea no compila (operador < no disponible)
	AcumuladorSuma<std::complex<float> > ac_suma(std::complex<float>(0.0f,0.0f));
	AcumuladorVariacion<std::complex<float> > ac_variacion;
	std::vector<Acumulador<std::complex<float> >*> acs(3);
	acs[0] = &ac_ultimo;
//	acs[1] = &ac_maximo;
	acs[1] = &ac_suma;
	acs[2] = &ac_variacion;
	
	Logger<std::complex<float> > logger(acs);
	logger.log(std::complex<float>(5.0f,0.0f));
	logger.log(std::complex<float>(-1.0f,1.0f));
	logger.log(std::complex<float>(2.0f,-1.0f));
	logger.log(std::complex<float>(3.0f,-1.0f));
	logger.log(std::complex<float>(3.2f,3.2f));
}