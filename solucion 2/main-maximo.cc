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
	std::cout<<"float   : "<<acc_float.total()<<std::endl;

	AcumuladorMaximo<int> acc_int;
	acc_int.push(5);	
	acc_int.push(-1);	
	acc_int.push(2);	
	acc_int.push(3);	
	acc_int.push(3);
	std::cout<<"int     : "<<acc_int.total()<<std::endl;

/*	NO COMPILA CON std::complex y std::vector
 
	AcumuladorMaximo<std::complex<float>> acc_complex;
	acc_complex.push(std::complex<float>(5.0f,0.0f));
	acc_complex.push(std::complex<float>(-1.0f,1.0f));
	acc_complex.push(std::complex<float>(2.0f,-1.0f));
	acc_complex.push(std::complex<float>(3.0f,-1.0f));
	acc_complex.push(std::complex<float>(3.2f,3.2f));
	std::cout<<"complex : "<<acc_complex.total()<<std::endl;
	
	AcumuladorMaximo<std::vector<float>> acc_vector;
	acc_vector.push(std::vector<float>{{5.0f, 0.0f}});
	acc_vector.push(std::vector<float>{{-1.0f, 1.0f, 3.0f}});
	acc_vector.push(std::vector<float>{{2.0f}});
	acc_vector.push(std::vector<float>{{3.0f,-1.0f}});
	acc_vector.push(std::vector<float>{{3.2f, 3.2f, 3.2f, 3.2f}});
	std::cout<<"vector  : ";
	for (float f : acc_vector.total()) std::cout<<f<<" ";
	std::cout<<std::endl;
*/

}
