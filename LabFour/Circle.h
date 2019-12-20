#pragma once
#include "Figure.h"

class Circle:
	public Figure{
private:
	float _pi=3.14, _r;
public:
	Circle(); //Конструктор
	void setRadius(float r); //сеттер радиуса
	float areaFigure(); // площадь фигуры
	float perimetrFigure(); // периметр фигуры
	float getR(); // геттер радиуса
};

