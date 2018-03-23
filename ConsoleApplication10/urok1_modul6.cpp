#include<stdio.h>
#include<math.h>
#include<iostream>
#include<time.h>
#include<locale.h>
#include<stdarg.h>
using namespace std;
void swap(int*a, int*b);
void ShiftRight3(int *a, int *b, int*c);
void ShiftLeft3(int *a, int *b, int*c);
int IsLeapYear(int year);
int MonthDays(int M, int Y);
int  f(int *m2, int *m1, int *m0);
int fun(double x, double y);
double f(double x1, double y1, double x2, double y2);

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	cout << "Ведите номер задания :" << endl;
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
	{
		/*Описать процедуру ShiftRight3(A, B, C), выполняющую правый циклический сдвиг:
		значение A переходит в B, значение B — в C, значение C — в A (A, B, C — вещественные параметры,
		являющиеся одновременно входными и выходными). С помощью этой процедуры выполнить правый
		циклический сдвиг для двух данных наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).
		*/
		int a, b, c;
		cin >> a >> b >> c;
		ShiftRight3(&a, &b, &c);
		cout << a << "-" << b << "-" << c << endl;
		ShiftRight3(&a, &b, &c);
		cout << a << "-" << b << "-" << c << endl;
		ShiftRight3(&a, &b, &c);
		cout << a << "-" << b << "-" << c << endl;

	}break;
	case 2:
	{
		/*Описать процедуру ShiftLeft3(A, B, C), выполняющую левый циклический сдвиг:
		значение A переходит в C, значение C — в B, значение B — в A (A, B, C — вещественные параметры,
		являющиеся одновременно входными и выходными). С помощью этой процедуры выполнить левый циклический
		сдвиг для двух данных наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).
		*/
		int a, b, c;
		cin >> a >> b >> c;
		ShiftLeft3(&a, &b, &c);
		cout << a << "-" << b << "-" << c << endl;
		ShiftLeft3(&a, &b, &c);
		cout << a << "-" << b << "-" << c << endl;
		ShiftLeft3(&a, &b, &c);
		cout << a << "-" << b << "-" << c << endl;

	}break;
	case 3:
	{
		/*Описать функцию IsLeapYear(Y) логического типа, которая возвращает True,
		если год Y (целое положительное число) является високосным, и False в противном случае.
		Вывести значение функции IsLeapYear для пяти данных значений параметра Y.
		Високосным считается год, делящийся на 4, за исключением тех годов,
		которые делятся на 100 и не делятся на 400.
		*/
		int year;
		cout << "Введите год:";
		cin >> year;
		if (IsLeapYear)
			cout << "год является високосным" << endl;
		else
			cout << "год неявляется високосным" << endl;

	}break;
	case 4:
	{
		/*Используя функцию IsLeapYear из задания 3, описать функцию MonthDays(M, Y) целого типа,
		которая возвращает количество дней для M-го месяца года Y (1 ? M ? 12, Y > 0 — целые числа).
		Вывести значение функции MonthDays для данного года Y и месяцев M1, M2, M3.
		*/
		int M, Y;
		if (IsLeapYear)
		{
			cout << "Введите месяц:";
			cin >> M;
			cout << "Введите год:";
			cin >> Y;
			cout << "количество дней для " << M << " - го месяца" << Y << "года:";
			cout << MonthDays(M, Y);
			cout << endl;
		}
	}break;
	case 5:
	{
		/*Используя функцию MonthDays из задания 4, описать процедуру PrevDate(D, M, Y),
		которая по информации о правильной дате, включаю- щей день D, номер месяца M и год Y,
		определяет предыдущую дату (пара- метры целого типа D, M, Y являются одновременно входными и выходными).
		Применить процедуру PrevDate к трем исходным датам и вывести полученные значения предыдущих дат
		*/


	}break;
	case 6:
	{
		/*Используя функцию MonthDays из задания 4, описать процедуру NextDate(D, M, Y),
		которая по информации о правильной дате, включаю- щей день D, номер месяца M и год Y,
		определяет следующую дату (пара- метры целого типа D, M, Y являются одновременно входными и выходными).
		Применить процедуру NextDate к трем исходным датам и вывести полученные значения следующих дат*/

	}break;
	case 7:
	{
		/*Используя функцию Dist из задания Proc59, описать процедуру Altitudes(xA, yA, xB, yB, xC, yC, hA, hB, hC),
		находящую высоты hA, hB, hC треугольника ABC (выходные параметры), проведенные соответственно из
		вершин A, B, C (их координаты являются входными параметрами). С помощью этой процедуры найти высоты
		треугольников ABC, ABD, ACD, если даны координаты точек A, B, C, D.
		*/

	}break;
	case 8:
	{
		/*Определите функцию double f(double x, double y), которая вычисляет и возвращает длину гипотенузы
		прямоугольного треугольника, две другие стороны x и y которого известны
		*/
		double x, y;
		cout << "Введите катеты прямоугольного треугольника:" << endl;
		cin >> x >> y;
		cout << "длинa гипотенузы:";
		cout << fun(x, y) << endl;
	}break;
	case 9:
	{
		/*Напишите функцию double f(double x1, double y1, double x2, double y2),
		которая вычисляет расстояние между двумя точками (xl, yl) и (x2, y2)
		*/
		int x1, x2, y1, y2;
		cin >> x1 >> x2 >> y1 >> y2;
		cout << "расстояние между двумя точками=";
		cout << f(x1, y1, x2, y2) << endl;
	}break;
	case 10:
	{
		/*Напишите функцию int f(int m2, int m1, int m0), которая вычисляет и возвращает
		натуральное число, первая (сотни), вторая (десятки) и третья (единицы) цифры которого равны соответственно m2, m1, m0*/
		int m2, m1, m0;

		int result = f(&m2, &m1, &m0);
		cout << result << endl;
	}break;
	}
}

//////////////////////////////////////////////////////////////
void swap(int*a, int*b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
void ShiftRight3(int *a, int *b, int*c)
{
	swap(a, b);
	swap(a, c);
}
void ShiftLeft3(int *a, int *b, int*c)
{
	swap(a, c);
	swap(c, b);
}
int  IsLeapYear(int year)
{
	return ((year % 100 == 0 && year % 400 != 0) || (year % 4 == 0));

}

int MonthDays(int M, int Y)
{
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (M == 2 && IsLeapYear(Y))
		return month[M - 1] + 1;
	return month[M - 1];
}
int  f(int *m2, int *m1, int *m0)
{
	int x;
	cin >> x;
	if (m2)
		x % 1;
	return x;
	if (m1)
		x % 10;
	return x;
	if (m0)
		x % 100;
	return x;

}
int fun(double x, double y)
{
	return sqrt(pow(x, 2) + pow(y, 2));
}
double f(double x1, double y1, double x2, double y2)
{
	int A, B;
	A = x2 - x1;
	B = y2 - y1;
	return sqrt(pow(A, 2) + pow(B, 2));
}