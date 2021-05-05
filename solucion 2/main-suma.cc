#include "acumulador-suma.h"
#include <iostream>
#include <complex>
#include <vector>
#include <list>


int main(int argc, char** argv) {

	AcumuladorSuma<float> acc_float(0.0f);
	acc_float.push(5.0f);
	acc_float.push(-1.0f);
	acc_float.push(2.0f);
	acc_float.push(3.0f);
	acc_float.push(3.2f);
	std::cout<<"float   : "<<acc_float.total()<<std::endl;

	AcumuladorSuma<int> acc_int(0);
	acc_int.push(5);
	acc_int.push(-1);
	acc_int.push(2);
	acc_int.push(3);
	acc_int.push(3);
	std::cout<<"int     : "<<acc_int.total()<<std::endl;

	std::complex<float> c {1,2ç};
	std::vector<int>    u(20,1);
	std::vector<int>    v {20,1};
	T x {2};

	v = std::vector<int>(4,0);


	AcumuladorSuma<std::complex<float>> acc_complex({0.0f,0.0f});
	acc_complex.push({5.0f,0.0f});
	acc_complex.push(std::complex<float>(-1.0f,1.0f));
	acc_complex.push(std::complex<float>(2.0f,-1.0f));
	acc_complex.push(std::complex<float>(3.0f,-1.0f));
	acc_complex.push(std::complex<float>(3.2f,3.2f));
	std::cout<<"complex : "<<acc_complex.total()<<std::endl;

	std::list<int> v {1,2,3};
	v = {0,1};

	T x {};

	AcumuladorSuma<std::vector<float>> acc_vector({0.0f, 0.0f, 0.0f});
	acc_vector.push({5.0f, 0.0f});
	acc_vector.push(std::vector<float>{{-1.0f, 1.0f, 3.0f}});
	acc_vector.push(std::vector<float>{{2.0f}});
	acc_vector.push(std::vector<float>{{3.0f,-1.0f}});
	acc_vector.push(std::vector<float>{{3.2f, 3.2f, 3.2f, 3.2f}});
	std::cout<<"vector  : ";
	for (float f : acc_vector.total()) std::cout<<f<<" ";
	std::cout<<std::endl;

}
