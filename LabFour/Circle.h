#pragma once
#include "Figure.h"

class Circle:
	public Figure{
private:
	float _pi=3.14, _r;
public:
	Circle();
	void setRadius(float r);
	float areaFigure();
	float perimetrFigure();
	float getR();
};

