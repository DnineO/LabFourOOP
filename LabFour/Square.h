#pragma once
#include "Figure.h"
class Square:
	public Figure
{private:
	float _a;
public:
	Square(); // конструктор
	void setSide(float _a); //сеттер стороны
	float areaFigure(); //площадь фигуры
	float perimetrFigure(); // периметр фигуры
	float getA(); // геттер А
};

