// diyTypeCal.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
//��������
class Complex
{
protected:
	double real;
	double imag;

public:
	Complex(double r = 0.00, double i = 0.00){
		real = r;
		imag = i;
	}
	void outPut();

	//Complex add(Complex c);
	//Complex add(double r);
	////ͨ����Ԫ���зǳ�Ա��������
	//friend Complex add(Complex c1, Complex c2);
	//friend Complex add(Complex c, double r);
	//friend Complex add(double r, Complex c);
	////���������
	//Complex operator +(Complex c);
	//Complex operator +(double r);
	//�����˷�
	Complex operator *(Complex c);
	Complex operator *(double r);
	//ͨ����Ԫ���зǳ�Ա�������������
	friend Complex operator +(Complex c1, Complex c2);
	friend Complex operator +(Complex c, double r);
	friend Complex operator +(double r, Complex c);

};

Complex Complex::operator*(Complex c){
	return Complex(real * c.real - imag* c.imag, real*c.imag + imag * c.real);
}
Complex Complex::operator*(double r){
	return Complex(real *r, imag * r);
}
////��������غ���
//Complex Complex::operator+(Complex c){
//	return Complex(real+c.real,imag+c.imag);
//}
//Complex Complex::operator+(double r){
//	return Complex(real+r,imag);
//}

//ͨ����Ԫ���зǳ�Ա�������������
Complex operator+(Complex c1,Complex c2){
	return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
Complex operator+(Complex c, double r){
	return Complex(c.real + r, c.imag);
}
Complex operator+(double r, Complex c){
	return Complex(c.real + r, c.imag);
}
////��Ԫ���㺯��
//Complex add(Complex c1, Complex c2){
//	return Complex(c1.real + c2.real, c1.imag + c2.imag);
//}
//Complex add(Complex c, double r){
//	return Complex(c.real + r, c.imag);
//}
//Complex add(double r, Complex c){
//	return Complex(r + c.real, c.imag);
//}
//ͨ���������
void Complex::outPut(){
	if (imag<0.00)
	{
		std::cout << "(" << real << imag << "i)" << std::endl;
	}
	else
	{
		std::cout << "(" << real << "+" << imag << "i)" << std::endl;
	}
}
////��Ա���㺯��
//Complex Complex::add(Complex c){
//	return Complex(real + c.real, imag + c.imag);
//}
//Complex Complex::add(double x){
//	return Complex(real+x,imag);
//}

int _tmain(int argc, _TCHAR* argv[])
{
	Complex a(1.5, 23.43), b(12.12, -45.23);
	Complex c1, c2, c3, c4,c5;
	//����addȫ��Ϊ��̬
	//c1 = a.add(b);
	//c2 = b.add(-24.5);
	//c3 = add(c1, c2);
	//c4 = add(c3, 5.258);
	//c5 = c3 + c4;
	//c1.outPut();
	//c2.outPut();
	//c3.outPut();
	//c4.outPut();
	//c5.outPut();
	c1 = a + b;
	c1.outPut();
	return 0;
}

