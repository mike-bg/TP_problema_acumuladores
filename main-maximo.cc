#pragma once
#include "acumulador-maximo.h"
#include <iostream>
#include <complex>
#include <vector>

int main(int argc, char** argv) {

    AcumuladorMaximo<float> acc_float;
    acc_float.push(5.0f);	
	acc_float.push(-1.0f);	
	acc_float.push(2.0f);	
	acc_float.push(3.0f);	
	acc_float.push(3.2f);
    std::cout << "float : " << acc_float.total() << std::endl;


    AcumuladorMaximo<int> acc_int;
    acc_int.push(5);	
	acc_int.push(-1);	
	acc_int.push(2);	
	acc_int.push(3);	
	acc_int.push(3);
	std::cout<<"int : " << acc_int.total() << std::endl;

};