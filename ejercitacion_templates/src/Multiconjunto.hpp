#ifndef __MULTICONJUNTO_HPP__
#define __MULTICONJUNTO_HPP__

#include "Diccionario.hpp"

template <class T>
class Multiconjunto{
public:
	Multiconjunto();
	void agregar(T x);
	int ocurrencias(T x) const;
private:
	Diccionario<T,int> _multiconjunto;
};

#endif

template<class T>
Multiconjunto<T> :: Multiconjunto(){}

template<class T>
void Multiconjunto<T> :: agregar (T x){
	_multiconjunto.definir(x,1);
}

template<class T>
int Multiconjunto<T> ::ocurrencias(T x) const{
	return _multiconjunto.obtener(x);
}

