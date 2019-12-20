#include "Rectangle.h"

Rectangle::Rectangle() 
{
}

void Rectangle::setSideA(float a) {
	if (a>0)
	_a = a;
}

void Rectangle::setSideB(float b) {
	if (b>0)
	_b = b;
}

void Rectangle::setAllSide(float a, float b) {
	setSideA(a);
	setSideB(b);
}

float Rectangle::areaFigure() {
	return _a * _b;
}

float Rectangle::perimetrFigure() {
	return (_a + _b) * 2;
}

float Rectangle::getA()
{
	return _a;
}

float Rectangle::getB() {
	return _b;
}