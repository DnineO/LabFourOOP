#include "Circle.h"

Circle::Circle() {

}

void Circle::setRadius(float r) {
	if (r > 0)
		_r = r;
}

float Circle::areaFigure() {
	return _r * _r * _pi;
}

float Circle::perimetrFigure() {
	return 2 * _pi * _r;
}

float Circle::getR() {
	return _r;
}