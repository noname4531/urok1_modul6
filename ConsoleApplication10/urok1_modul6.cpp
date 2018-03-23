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
	cout << "������ ����� ������� :" << endl;
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
	{
		/*������� ��������� ShiftRight3(A, B, C), ����������� ������ ����������� �����:
		�������� A ��������� � B, �������� B � � C, �������� C � � A (A, B, C � ������������ ���������,
		���������� ������������ �������� � ���������). � ������� ���� ��������� ��������� ������
		����������� ����� ��� ���� ������ ������� �� ���� �����: (A1, B1, C1) � (A2, B2, C2).
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
		/*������� ��������� ShiftLeft3(A, B, C), ����������� ����� ����������� �����:
		�������� A ��������� � C, �������� C � � B, �������� B � � A (A, B, C � ������������ ���������,
		���������� ������������ �������� � ���������). � ������� ���� ��������� ��������� ����� �����������
		����� ��� ���� ������ ������� �� ���� �����: (A1, B1, C1) � (A2, B2, C2).
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
		/*������� ������� IsLeapYear(Y) ����������� ����, ������� ���������� True,
		���� ��� Y (����� ������������� �����) �������� ����������, � False � ��������� ������.
		������� �������� ������� IsLeapYear ��� ���� ������ �������� ��������� Y.
		���������� ��������� ���, ��������� �� 4, �� ����������� ��� �����,
		������� ������� �� 100 � �� ������� �� 400.
		*/
		int year;
		cout << "������� ���:";
		cin >> year;
		if (IsLeapYear)
			cout << "��� �������� ����������" << endl;
		else
			cout << "��� ���������� ����������" << endl;

	}break;
	case 4:
	{
		/*��������� ������� IsLeapYear �� ������� 3, ������� ������� MonthDays(M, Y) ������ ����,
		������� ���������� ���������� ���� ��� M-�� ������ ���� Y (1 ? M ? 12, Y > 0 � ����� �����).
		������� �������� ������� MonthDays ��� ������� ���� Y � ������� M1, M2, M3.
		*/
		int M, Y;
		if (IsLeapYear)
		{
			cout << "������� �����:";
			cin >> M;
			cout << "������� ���:";
			cin >> Y;
			cout << "���������� ���� ��� " << M << " - �� ������" << Y << "����:";
			cout << MonthDays(M, Y);
			cout << endl;
		}
	}break;
	case 5:
	{
		/*��������� ������� MonthDays �� ������� 4, ������� ��������� PrevDate(D, M, Y),
		������� �� ���������� � ���������� ����, �������- ��� ���� D, ����� ������ M � ��� Y,
		���������� ���������� ���� (����- ����� ������ ���� D, M, Y �������� ������������ �������� � ���������).
		��������� ��������� PrevDate � ���� �������� ����� � ������� ���������� �������� ���������� ���
		*/


	}break;
	case 6:
	{
		/*��������� ������� MonthDays �� ������� 4, ������� ��������� NextDate(D, M, Y),
		������� �� ���������� � ���������� ����, �������- ��� ���� D, ����� ������ M � ��� Y,
		���������� ��������� ���� (����- ����� ������ ���� D, M, Y �������� ������������ �������� � ���������).
		��������� ��������� NextDate � ���� �������� ����� � ������� ���������� �������� ��������� ���*/

	}break;
	case 7:
	{
		/*��������� ������� Dist �� ������� Proc59, ������� ��������� Altitudes(xA, yA, xB, yB, xC, yC, hA, hB, hC),
		��������� ������ hA, hB, hC ������������ ABC (�������� ���������), ����������� �������������� ��
		������ A, B, C (�� ���������� �������� �������� �����������). � ������� ���� ��������� ����� ������
		������������� ABC, ABD, ACD, ���� ���� ���������� ����� A, B, C, D.
		*/

	}break;
	case 8:
	{
		/*���������� ������� double f(double x, double y), ������� ��������� � ���������� ����� ����������
		�������������� ������������, ��� ������ ������� x � y �������� ��������
		*/
		double x, y;
		cout << "������� ������ �������������� ������������:" << endl;
		cin >> x >> y;
		cout << "����a ����������:";
		cout << fun(x, y) << endl;
	}break;
	case 9:
	{
		/*�������� ������� double f(double x1, double y1, double x2, double y2),
		������� ��������� ���������� ����� ����� ������� (xl, yl) � (x2, y2)
		*/
		int x1, x2, y1, y2;
		cin >> x1 >> x2 >> y1 >> y2;
		cout << "���������� ����� ����� �������=";
		cout << f(x1, y1, x2, y2) << endl;
	}break;
	case 10:
	{
		/*�������� ������� int f(int m2, int m1, int m0), ������� ��������� � ����������
		����������� �����, ������ (�����), ������ (�������) � ������ (�������) ����� �������� ����� �������������� m2, m1, m0*/
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