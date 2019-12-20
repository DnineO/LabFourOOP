#pragma once
#include "Figure.h"

class Rectangle:
public Figure{
private:
	float _a, _b;
public:
	Rectangle(); // конструктор
	void setSideA(float a); //сеттер стороны А
	void setSideB(float b); // сеттер стороны Б
	void setAllSide(float a, float b); // сеттер обоих сторон
	float areaFigure(); // площадь фигуры
	float perimetrFigure(); // площадь фигуры
	float getA(); //геттер А
	float getB(); //геттер Б
};

