// funcArray.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
double intergral(double a, double b, double(*fun)(double), int n){
	double h = (b - a) / n;
	double sum = ((*fun)(a)+(*fun)(b)) / 2;
	for (int i = 0; i <= n;	 i++)
	{
		sum += (*fun)(a + i*h);
	}
	sum *= h;
	return sum;
}

double line(double x){
	return 10 * x + 5;
}

double parabola(double x){
	return 2*x*x + 4 * x+7;
}


int _tmain(int argc, _TCHAR* argv[])
{
	int a, b;
	double(*fun)(double);
	std::cout << "�����������" << std::endl;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;

	fun = &line;
	std::cout << "ֱ�߻����ǣ�" << intergral(a, b, fun, 1000) << std::endl;

	fun = &parabola;
	std::cout << "�����߻����ǣ� " << intergral(a, b, fun, 1000) << std::endl;
	return 0;
}

