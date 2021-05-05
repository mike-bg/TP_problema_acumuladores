COMPILER=g++ 
FLAGS=--std=c++11 

all: main-ultimo main-maximo main-suma main-variacion main-logger-float main-logger-int main-logger-complex

main-ultimo: main-ultimo.cc acumulador-ultimo.h acumulador.h
	$(COMPILER) $(FLAGS) main-ultimo.cc -o main-ultimo

main-maximo: main-maximo.cc acumulador-maximo.h acumulador.h
	$(COMPILER) $(FLAGS) main-maximo.cc -o main-maximo

main-suma: main-suma.cc acumulador-suma.h acumulador.h
	$(COMPILER) $(FLAGS) main-suma.cc -o main-suma

main-variacion: main-variacion.cc acumulador-variacion.h acumulador.h
	$(COMPILER) $(FLAGS) main-variacion.cc -o main-variacion

main-logger-float: main-logger-float.cc acumulador.h acumulador-ultimo.h acumulador-maximo.h acumulador-suma.h acumulador-variacion.h
	$(COMPILER) $(FLAGS) main-logger-float.cc -o main-logger-float

main-logger-int: main-logger-int.cc acumulador.h acumulador-ultimo.h acumulador-maximo.h acumulador-suma.h acumulador-variacion.h
	$(COMPILER) $(FLAGS) main-logger-int.cc -o main-logger-int

main-logger-complex: main-logger-complex.cc acumulador.h acumulador-ultimo.h acumulador-maximo.h acumulador-suma.h acumulador-variacion.h
	$(COMPILER) $(FLAGS) main-logger-complex.cc -o main-logger-complex
