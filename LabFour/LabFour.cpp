// LabFour.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Figure.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;
int main()
{
	Rectangle a;
	a.setAllSide(1, 5);
	cout << "RECTANGLE" << endl;
	cout << "Area = " << a.areaFigure()<<endl;
	cout << "Perimetr = " << a.perimetrFigure() << endl;
	cout << "Side A = " << a.getA() << " Side B = " << a.getB() << endl;
	Square b;
	b.setSide(7);
	cout << "SQUARE" << endl;
	cout << "Area = " << b.areaFigure() << endl;
	cout << "Perimetr = " << b.perimetrFigure() << endl;
	cout << "Side A = " << b.getA() << endl;
	Circle c;
	c.setRadius(4);
	cout << "CIRCLE" << endl;
	cout << "Area = " << c.areaFigure() << endl;
	cout << "Perimetr = " << c.perimetrFigure() << endl;
	cout << "Radius r = " << c.getR() << endl;
	
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
