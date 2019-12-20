#include "Square.h"

Square::Square() 
{
}

void Square::setSide(float a) {
	if (a > 0)
		_a = a;
}

float Square::areaFigure() {
	return _a * _a;
}

float Square::perimetrFigure() {
	return _a * 4;
}

float Square::getA() {
	return _a;
}