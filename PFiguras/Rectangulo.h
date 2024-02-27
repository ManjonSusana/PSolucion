#pragma once
#include "Figuras.h"
#include "Cuadrado.h"
class Rectangulo : public Cuadrado
{
protected:
	float alto, ancho;
public:

	Rectangulo(float,float) : Cuadrado() {};
};