#include<iostream>
#include"Cuadrado.h"
#include"Figuras.h"
#include"Rectangulo.h"

using namespace std;
int main() {
	Cuadrado objeto1(5,5);
	objeto1.calcularAreaPerimetro();
	objeto1.mostrarArea();
	objeto1.mostrarPerimetro();
	Rectangulo objeto2(5,4);
	objeto2.calcularAreaPerimetro();
	objeto2.mostrarArea();
	objeto2.mostrarPerimetro();
	return 0;
}