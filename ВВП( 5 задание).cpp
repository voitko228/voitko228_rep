// ВВП( 5 задание).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
	cout << "Задание 1" << '\n';
	cout << "Введите значения" << '\n';
	double x1, y1, x2, y2;
	cout << "x1: ";
	cin >> x1;
	cout << "x2: ";
	cin >> x2;
	cout << "y1: ";
	cin >> y1;
	cout << "y2: ";
	cin >> y2;
	cout << "Расстояние равно: " << fixed << setprecision(2) << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << endl;

	cout << "Задание 2";
	int A, B, C;
	printf("Введите А, B и C (через пробел): ");
	scanf("%i %i %i", &A, &B, &C);
	int AC = abs(C - A);
	int BC = abs(C - B);
	printf("AC = %i BC = %i\n", AC, BC);
	printf("AC + BC = %i", AC + BC);
	return 0;


	cout << "Задание 3" << '\n';
	float a, b, c;
	cout << "Введите А: ";
	cin >> a;
	cout << "Введите В: ";
	cin >> b;
	cout << "Введите С: ";
	cin >> c;
	if (a >= b || c <= a || c >= b)
	{
		cout << "Произведение отрезков AB и BC= " << (c - a) * (b - c) << " \n";
	}
	else
	{
		cout << "Некоректно введены данные \n";
	}
	
	return 0;


	cout << "Задание 4" << '\n';
	int a, b, s, p, x1, x2, y1, y2;
	cout << "x1: ";
	cin >> x1;
	cout << "y1: ";
	cin >> y1;
	cout << "x2: ";
	cin >> x2;
	cout << "y2: ";
	cin >> y2;
	a = abs(x2 - x1);
	b = abs(y2 - y1);
	p = (a + b) * 2;
	s = a * b;
	cout << "P: " << p << '\n';
	cout << "S: " << s;

	cout << "Задание 5" << '\n';
	int a, b, c, s, p, x1, x2, x3, y1, y2, y3;
	cout << "x1: ";
	cin >> x1;
	cout << "y1: ";
	cin >> y1;
	cout << "x2: ";
	cin >> x2;
	cout << "y2: ";
	cin >> y2;
	cout << "x3: ";
	cin >> x3;
	cout << "y3: ";
	cin >> y3;
	a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	p = a + b + c;
	cout << "P: " << p << '\n';
	p = p / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "S: " << s;