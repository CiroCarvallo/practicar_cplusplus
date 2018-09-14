//////////////
// PRELUDIO //
//////////////

// Typedef
typedef int Anio;
typedef int Mes;
typedef int Dia;

// MESES
const Mes ENERO = 1;
const Mes FEBRERO = 2;
const Mes MARZO = 3;
const Mes ABRIL = 4;
const Mes MAYO = 5;
const Mes JUNIO = 6;
const Mes JULIO = 7;
const Mes AGOSTO = 8;
const Mes SEPTIEMBRE = 9;
const Mes OCTUBRE = 10;
const Mes NOVIEMBRE = 11;
const Mes DICIEMBRE = 12;

// Ejercicio 1: esBisiesto
bool esBisiesto(Anio anio) {
  if (anio % 4 ==0){
    if (anio % 100 ==0){
      return anio % 400 == 0;
    }
    return true;
  }
  else{
    return false;
  }
}

// Ejercicio 2: diasEnMes
int diasEnMes(Anio anio,Mes mes){
  int cantidad;
  switch ( mes ){
  case ENERO:
    cantidad=31;
    break;
  case FEBRERO:
    if(esBisiesto(anio)) {cantidad=29;}
    else {cantidad=28;}
    break;
  case MARZO:
    cantidad=31;
    break;
  case MAYO:
    cantidad=31;
    break;
  case ABRIL:
    cantidad=30;
    break;
  case JUNIO:
    cantidad=30;
    break;
  case JULIO:
    cantidad=31;
    break;
  case AGOSTO:
    cantidad=31;
    break;
  case SEPTIEMBRE:
    cantidad=30;
    break;
  case OCTUBRE:
    cantidad=31;
    break;
  case NOVIEMBRE:
    cantidad=30;
    break;
  case DICIEMBRE:
    cantidad=31;
    break;
  }
  return cantidad;
}
//

// Para ejercicio 6
class Periodo;

class Fecha {
 public:
  // pre: anio > 0, mes \in [1, 12], dia \in [1, diasEnMes(anio, mes)]
  Fecha(Anio anio, Mes mes, Dia dia);

  Anio anio() const;
  Mes mes() const;
  Dia dia() const;

  bool operator==(Fecha o) const;
  bool operator<(Fecha o) const;
  void sumar_periodo(Periodo p);

  // Ejercicio 7: sumar período a fecha

 private:
  Anio _anio;
  Mes _mes; 
  Dia _dia;

  // Ejercicio 7: sumar a fecha
  void sumar_anios(int anios);
  void sumar_meses(int meses);
  void sumar_dias(int dias);
};

// Ejercicio 3: Constructor y métodos de Fecha
Fecha::Fecha(Anio anio, Mes mes, Dia dia) {
  _anio=anio;
  _mes=mes;
  _dia=dia;
}

Anio Fecha::anio() const {
  return _anio;
}

Mes Fecha::mes() const {
  return _mes;
}

Dia Fecha::dia() const {
  return _dia;
}

// Ejercicio 4: comparadores
bool Fecha::operator==(Fecha o) const {
  return (_dia==o.dia() and _mes==o.mes() and _anio==o.anio());
}

bool Fecha::operator<(Fecha o) const {
  if (_anio<o.anio()){
    return true;
  }
  else if (_anio==o.anio() and _mes<o.mes()){
    return true;
  }
  else if (_anio==o.anio() and _mes==o.mes() and _dia<o.dia()){
    return true;
  }
}


// Ejercicio 5: comparador distinto
bool operator!=(Fecha f1, Fecha f2) {
  return (f1.operator<(f2) or f2.operator<(f1));
}

//metodos privados de Fecha
void Fecha::sumar_anios(int anios){
_anio+=anios;
}

void Fecha::sumar_meses(int meses){
  _anio+=((_mes + meses ) / 12);
  _mes=(_mes + meses ) % 12;
}
void Fecha::sumar_dias(int dias){
  _anio+=(_dia + dias) /365;
  _mes=(_mes + ((_dia + dias) % 365) / 30) % 12;
  _dia=((_dia + dias) % 365) % 30;  // considerar la cantidad de dias de cada mes
}

// Ejercicio 6: clase período
class Periodo {
 public:
  Periodo(int anios, int meses, int dias);
  int anios() const;
  int meses() const;
  int dias() const;
 private:
  int _anios;
  int _meses;
  int _dias;

};

Periodo::Periodo(int anios,int meses,int dias){
  _anios=anios;
  _meses=meses;
  _dias=dias;
}

int Periodo::anios() const{
  return _anios;
}

int Periodo::meses() const {
  return _meses;
}

int Periodo::dias() const{
  return _dias;
}

void Fecha::sumar_periodo(Periodo p){
  this->sumar_anios(p.anios());
  this->sumar_meses(p.meses());
  this->sumar_dias(p.dias());
}

// Ejercicio 8: clase Intervalo
class Intervalo {
 public: 
  Intervalo(Fecha desde, Fecha hasta);
  Fecha desde() const;
  Fecha hasta() const;
  int enDias() const;
 private:
  Fecha _desde;
  Fecha _hasta;
};

Intervalo::Intervalo(Fecha desde, Fecha hasta): _desde(desde), _hasta(hasta){}

Fecha Intervalo::desde() const {
  return _desde;
}

Fecha Intervalo::hasta() const{
  return _hasta;
}
int Intervalo::enDias() const{
  Fecha f1(_desde);
  int cantidad=0;
  while(not (f1==_hasta)){
    f1.sumar_periodo(Periodo(0,0,1));
    cantidad++;
  } 
  return cantidad;
}