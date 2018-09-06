/* Completar */
#include "Diccionario.h"
#include <vector>

Diccionario::Diccionario(){
	_diccionario;
}
 
void Diccionario::definir(Clave k, Valor v){
	for (int i=0; i<_diccionario.size();i++){
		if (_diccionario[i].clave==k){
			_diccionario[i].valor=v;
			return;
		}
	}
	Asociacion a;
	a.clave=k;
	a.valor=v;
	_diccionario.push_back(a);
}

bool Diccionario::def(Clave k) const{
	for (int i=0; i<_diccionario.size();i++){
		if(_diccionario[i].clave==k){
			return true;
		}
	}
	return false;
}
// asumo que clave esta en diccionario
Valor Diccionario::obtener(Clave k) const {
	for (int i=0; i<_diccionario.size();i++){
		if(_diccionario[i].clave==k){
			return _diccionario[i].valor;
		}
	}
}

void Diccionario::borrar(Clave k){
	for (int i=0; i<_diccionario.size();i++){
		if(_diccionario[i].clave==k){
			_diccionario.erase(_diccionario.begin()+i);
			return;
		}
	}
}

std::vector <Clave> Diccionario::claves() const	{
	std::vector <Clave> claves;
	for (int i=0; i<_diccionario.size();i++){
		claves.push_back(_diccionario[i].clave);
	}
	return claves;
}

bool Diccionario::operator==(Diccionario o) const {
	std::vector<Clave> v1;
	for (int i=0; i<_diccionario.size(); i++){
		v1.push_back(_diccionario[i].clave);
	}
	if(not esPermutacion(v1,o.claves())){return false;}
	
	for (int i=0; i<_diccionario.size();i++){
		if (_diccionario[i].valor!=o.obtener(_diccionario[i].clave)){
			return false;
		}
	}
	return true;
}

Diccionario Diccionario::operator||(Diccionario o) const {
	//Diccionario d=this;
	Diccionario d;
	for (int i=0;i<_diccionario.size();i++){
		d.definir(_diccionario[i].clave,_diccionario[i].valor);
	}
	std::vector<Clave> o_claves;
	o_claves=o.claves();
	for (int j=0;j<o_claves.size();j++){
		if(not d.def(o_claves[j])){
			d.definir(o_claves[j],o.obtener(o_claves[j]));
		}
	}
	return d;
}

Diccionario Diccionario::operator&&(Diccionario o) const{
	Diccionario d;
	for (int i=0;i<_diccionario.size();i++){
		if(o.def(_diccionario[i].clave)){
			d.definir(_diccionario[i].clave,_diccionario[i].valor);
		}
	}
	return d;
}

int cantidad(Clave k, std::vector<Clave> v1){
	int cnt=0;
	for (int i=0; i<v1.size();i++){
		if(v1[i]==k) cnt++;
	}
	return cnt;
}

bool esPermutacion(std::vector<Clave> v1,std::vector <Clave> v2){
	if (v1.size()!=v2.size()){return false;}
	for (int i=0; i<v1.size();i++){
		if(cantidad(v1[i],v1)!=cantidad(v1[i],v2)){return false;}
	}
	return true;
}
