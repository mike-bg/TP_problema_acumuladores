#pragma once
#include <vector>
#include <chrono>
#include "acumulador.h"

template <typename T>
class AcumuladorVariacion : public Acumulador<T> {
	T t, t_ini;
	std::chrono::system_clock::time_point start, now;
	bool first;
public:
	AcumuladorVariacion() : first(true) { }
	void push(const T& t) {
		if (first) { first=false; this->t_ini=t; start = std::chrono::system_clock::now(); }
		this->t = t; now = std::chrono::system_clock::now();
	}
	T total() const       { return (t_ini - t)/std::chrono::duration<float>(start-now).count(); }
};


//Especializamos para std::vector<float>
template<>
class AcumuladorVariacion<std::vector<float>> : public Acumulador<std::vector<float>> {
	std::vector<float> t, t_ini;
	std::chrono::system_clock::time_point start, now;
	bool first;
public:
	AcumuladorVariacion() : first(true) { }
	void push(const std::vector<float>& t) {
		if (first) { first=false; this->t_ini=t; start = std::chrono::system_clock::now(); }
		this->t = t; now = std::chrono::system_clock::now();
	}
	std::vector<float> total() const       {
		std::vector<float> diff(std::min(t.size(), t_ini.size()));
		float duration = std::chrono::duration<float>(start-now).count();
		for (int i = 0; i<int(diff.size()); ++i) diff[i]= (t_ini[i] - t[i])/duration;
		return diff;
	}

};

