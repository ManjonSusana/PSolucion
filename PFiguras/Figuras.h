#pragma once
class Figuras
{
protected:
	float perimetro, area;
public:
	Figuras();
	Figuras(float, float);
	virtual void mostrarPerimetro();
	virtual void mostrarArea();
};

