#ifndef __DICCIONARIO_HPP__
#define __DICCIONARIO_HPP__

#include <vector>
#include <cassert>
#include <iostream>

template <class Clave> // devuelve la posicion del minimode un vector != vacio
int pos_minimo (std::vector<Clave> v1){
	int min; min=v1[0];
	int pos_min; pos_min=0;
	for (unsigned int i=1; i<v1.size();i++){
		if (v1[i]<min){
			min=v1[i];
			pos_min=i;
		}
	}
	return pos_min;
}

template <class Clave, class Valor>
class Diccionario {
public:
	Diccionario();
	void definir(Clave k, Valor v);
	bool def(Clave k) const;
	Valor obtener(Clave k) const;
	std::vector <Clave> claves() const;
private:

	struct Asociacion {
		Asociacion(Clave k, Valor v);
		Clave clave;
		Valor valor;
	};
	std::vector<Asociacion> _asociaciones;
};


template <class Clave, class Valor>
Diccionario <Clave,Valor>::Diccionario() {
}

template <class Clave,class Valor>
Diccionario<Clave,Valor> ::Asociacion::Asociacion(Clave k, Valor v) : clave(k), valor(v) {
}

template <class Clave,class Valor>
void Diccionario <Clave,Valor>::definir(Clave k, Valor v) {
	for (unsigned int i = 0; i < _asociaciones.size(); i++) {
		if (_asociaciones[i].clave == k) {
			_asociaciones[i].valor = v;
			return;
		}
	}
	_asociaciones.push_back(Asociacion(k, v));
}

template<class Clave,class Valor>
bool Diccionario <Clave,Valor>::def(Clave k) const {
	for (unsigned int i = 0; i < _asociaciones.size(); i++) {
		if (_asociaciones[i].clave == k) {
			return true;
		}
	}
	return false;
}

template <class Clave,class Valor>
Valor Diccionario <Clave,Valor>::obtener(Clave k) const {
	for (unsigned int i = 0; i < _asociaciones.size(); i++) {
		if (_asociaciones[i].clave == k) {
			return _asociaciones[i].valor;
		}
	}
	assert(false);
}

// usa seleccion sort
template <class Clave, class Valor>
std::vector<Clave> Diccionario<Clave,Valor>::claves() const{
	int size=_asociaciones.size();
	std::vector<Clave> v1(size);
	std::vector<Clave> v2;
	for (unsigned int i=0; i<size;i++){
		v1[i]=_asociaciones[i].clave;
	}
	// busco la 
	while( !v1.empty() ){
			int pos=pos_minimo(v1);
			v2.push_back(v1[pos]);
			v1.erase(v1.begin()+pos);
	}
	return v2;
}

#endif