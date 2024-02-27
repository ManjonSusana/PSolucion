#pragma once
#include "Figuras.h"
class Cuadrado: public Figuras
{
protected:
	float alto, ancho;
public:
	Cuadrado();
	Cuadrado(float, float);
	virtual void calcularAreaPerimetro();
};

