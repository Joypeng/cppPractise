// 2_20.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main(){
	int i = 42;
	int *pi = &i;
	*pi = *pi* *pi;
	cout << "value=:" << pi << endl;
	cout << "realValue=:" << *pi;
}
