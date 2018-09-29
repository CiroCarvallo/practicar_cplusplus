#ifndef ALGO2_LABO_CLASE5_ALGORITMOS_H
#define ALGO2_LABO_CLASE5_ALGORITMOS_H

#include <utility>
#include <iterator>
#include <vector>

// Completar con las funciones del enunciado

/*template <class Contenedor>
typename Contenedor::value_type minimo (const Contenedor & c){
	//typename Contenedor::const_iterator min=c.begin(); // que implica que c.begin() sea const_iterator
	typename Contenedor::value_type min=*(c.begin());
	for (typename Contenedor::const_iterator it=c.begin();it!=c.end();it++){
		//if (*it < *min){
		if (*it < min){
			min=*it
			//++min;
		}
	}
	return min;
}*/
template <class Contenedor>
typename Contenedor::value_type minimo (const Contenedor & c){ 
	typename Contenedor::const_iterator min=c.begin();
	for (typename Contenedor::const_iterator it=c.begin();it!=c.end();it++){
		if (*it < *min){
			++min;
		}
	}
	return *min;
}

//EJ2

template <class Contenedor>
typename Contenedor::value_type promedio(const Contenedor& c){
	typename Contenedor::value_type suma(0);
	int i=0;
	for (typename Contenedor::const_iterator it=c.begin();it!=c.end();it++ ){
		suma+=*it;
		++i;	
	}
	return suma/i;
} 

//EJ3

template<class Iterator>
typename Iterator::value_type minimoIter (const Iterator& desde,const Iterator& hasta){
	Iterator min=desde;
	for (Iterator it=desde;it!=hasta;it++){
		if (*it < *min){
			++min;
		}
	}
	return *min;
}

template <class Iterator>
typename Iterator::value_type promedioIter(const Iterator& desde, const Iterator& hasta){
	typename Iterator::value_type suma(0);
	int longitud(0);
	for (Iterator it=desde;it!=hasta;it++){
		suma+=*it;
		++longitud;
	}
	return suma/longitud;
}

//EJ4

template<class Contenedor>
void filtrar(Contenedor& c, const typename Contenedor::value_type &elem){
	typename Contenedor::const_iterator it=c.begin();
	while(it!=c.end()){
		if (*it==elem) it=c.erase(it);
		else ++it;
	}
}

//EJ5

template <class Contenedor>
bool ordenado(const Contenedor& c){
	typename Contenedor::const_iterator min=c.begin();
	for (typename Contenedor::const_iterator it=++c.begin();it!=c.end();++it){
		if (*it <= *min) return false;
		else ++min;
	}
	return true;
}

/*template <class Contenedor>
std::pair<Contenedor,Contenedor> split(const Contenedor& c, const typename Contenedor::value_type & elem){
	Contenedor uno; //asumo un constructor por defecto
	Contenedor dos; //con dos() tira error
	typename Contenedor::const_iterator itUno=uno.begin();
	typename Contenedor::const_iterator itDos=dos.begin();
	for (typename Contenedor::const_iterator it =c.begin(); it!=c.end();++it){
		if (*it < elem) itUno=uno.insert(itUno,*it);
		else itDos=dos.insert(itDos,*it);
	}
	std::pair <Contenedor,Contenedor> par (uno,dos);
	return par;
}*/
//EJ 6

template <class Contenedor>
std::pair<Contenedor,Contenedor> split(const Contenedor& c,const typename Contenedor::value_type& elem){
	Contenedor c1,c2;
	for (typename Contenedor::const_iterator it=c.begin();it!=c.end();++it){
		if (*it < elem) c1.insert(c1.end(),*it);
		else c2.insert(c2.end(),*it);
	}
	std::pair<Contenedor,Contenedor> par(c1,c2);
	return par;
}

//EJ 7

template <class Contenedor>
void merge(const Contenedor& c1, const Contenedor& c2, Contenedor& res){
	typename Contenedor::const_iterator it1=c1.begin();
	typename Contenedor::const_iterator it2=c2.begin();
	while (it1!=c1.end() and it2!=c2.end()){
		if (*it1 < *it2) {
			res.insert(res.end(),*it1);
			++it1;
		}
		else {
			res.insert(res.end(),*it2);
			++it2;
		}
	}
	if (it1==c1.end()){
		while (it2!=c2.end()) {
			res.insert(res.end(),*it2);
			++it2;
		}
	}
	else {
		while (it1!=c1.end()) {
			res.insert(res.end(),*it1);
			++it1;
		}
	}
}


#endif //ALGO2_LABO_CLASE5_ALGORITMOS_H


