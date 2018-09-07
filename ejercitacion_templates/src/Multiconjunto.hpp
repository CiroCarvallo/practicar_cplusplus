#ifndef __MULTICONJUNTO_HPP__
#define __MULTICONJUNTO_HPP__

#include "Diccionario.hpp"
#include <vector>

template <class T>
class Multiconjunto{
public:
	Multiconjunto();
	void agregar(T x);
	int ocurrencias(T x) const;
	bool operator<=(Multiconjunto <T> otro) const;
private:
	Diccionario<T,int> _multiconjunto;
};

#endif

template<class T>
Multiconjunto<T> :: Multiconjunto(){}

template<class T>
void Multiconjunto<T> :: agregar (T x){
	int cantidad; cantidad=this->ocurrencias(x);
	_multiconjunto.definir(x,cantidad+1);
}

template<class T>
int Multiconjunto<T> ::ocurrencias(T x) const{
	if (_multiconjunto.def(x)){
		return _multiconjunto.obtener(x);
	}
	else  {
		return 0;
	}
}

template<class T>
bool Multiconjunto <T> ::operator<=(Multiconjunto <T> otro) const{
	std::vector<T> claves=_multiconjunto.claves();
	for (unsigned int i=0; i<claves.size();i++){
		if (this->ocurrencias(claves[i])>otro.ocurrencias(claves[i])){
			return false;
		}
	}
	return true;	
}
