#include "gtest/gtest.h"
#include "../src/Diccionario.h"

#if EJ >= 4
TEST(diccionario, ej4_def) {
	Diccionario d;
	ASSERT_FALSE(d.def(1));
	ASSERT_FALSE(d.def(2));
	ASSERT_FALSE(d.def(3));
	d.definir(1, 10);
	ASSERT_TRUE(d.def(1));
	ASSERT_FALSE(d.def(2));
	ASSERT_FALSE(d.def(3));
	d.definir(2, 20);
	ASSERT_TRUE(d.def(1));
	ASSERT_TRUE(d.def(2));
	ASSERT_FALSE(d.def(3));
}

TEST(diccionario, ej4_obtener) {
	Diccionario d;
	d.definir(1, 4);
	ASSERT_EQ(d.obtener(1), 4);
	d.definir(1, 44);
	ASSERT_EQ(d.obtener(1), 44);
	d.definir(2, 5);
	ASSERT_EQ(d.obtener(1), 44);
	ASSERT_EQ(d.obtener(2), 5);
	d.definir(1, 444);
	ASSERT_EQ(d.obtener(1), 444);
	ASSERT_EQ(d.obtener(2), 5);
	d.definir(2, 55);
	ASSERT_EQ(d.obtener(1), 444);
	ASSERT_EQ(d.obtener(2), 55);
}
#endif

#if EJ >= 5

TEST(diccionario,ej5_borrar){
	Diccionario d;
	d.definir(1,4);
	d.borrar(1);
	ASSERT_FALSE(d.def(1));
	d.definir(2,4);
	d.definir(3,2);
	d.borrar(3);
	ASSERT_FALSE(d.def(3));
	d.borrar(5);
	ASSERT_FALSE(d.def(3));
	ASSERT_TRUE(d.def(2));
	ASSERT_EQ(d.obtener(2),4);
}

#endif

#if EJ >= 6

TEST(diccionario,ej6_vector_claves){
	Diccionario d;
	d.definir(1,4);
	d.definir(2,3);
	std::vector<Clave> v;
	v.push_back(2);
	v.push_back(1);
	ASSERT_TRUE(esPermutacion(d.claves(),v));
	v.push_back(2);
	ASSERT_FALSE(esPermutacion(d.claves(),v));
}

#endif

#if EJ >= 7
TEST(diccionario,ej7_eq){
	Diccionario d;
	d.definir(1,4);
	Diccionario a;
	ASSERT_FALSE(d.operator==(a));
	a.definir(1,4);
	//ASSERT_TRUE(d==a);
	a.borrar(1);
	d.definir(2,3);
	a.definir(2,3);
	a.definir(1,4);
	//ASSERT_TRUE(d==a);
	a.borrar(2);
	a.definir(2,9);
	//ASSERT_FALSE(d==a);
}



#endif

#if EJ >= 8

TEST(diccionario,ej8_union_interseccion){
	Diccionario d1;
	Diccionario d2;
	Diccionario d3;
	d3.definir(1,4);
	d3.definir(3,1);
	d1.definir(1,4);
	d2.definir(1,3);
	d2.definir(3,1);
	ASSERT_TRUE(d1.operator||(d2) == d3);
	ASSERT_TRUE(d1.operator&&(d2) == d1 );

}

#endif

