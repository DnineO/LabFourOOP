#pragma once
#include "Figure.h"

class Rectangle:
public Figure{
private:
	float _a, _b;
public:
	Rectangle();
	void setSideA(float a);
	void setSideB(float b);
	void setAllSide(float a, float b);
	float areaFigure();
	float perimetrFigure();
	float getA();
	float getB();
};

