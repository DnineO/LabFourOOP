#pragma once
#include "Figure.h"
class Square:
	public Figure
{private:
	float _a;
public:
	Square();
	void setSide(float _a);
	float areaFigure();
	float perimetrFigure();
	float getA();
};

