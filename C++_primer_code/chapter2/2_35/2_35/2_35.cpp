// 2_35.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;
	std::cout << typeid(i).name() << " " << typeid(j).name() << " " << typeid(k).name() << " " << typeid(p).name() << " " << typeid(k2).name() << " " << typeid(j2).name() << " " << std::endl;
	return 0;
}
