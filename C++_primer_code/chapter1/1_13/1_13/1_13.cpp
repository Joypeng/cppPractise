// 1_13.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
//����д1.11
int main()
{
	int val1, val2;
	std::cin >> val1 >> val2;
	if (val1 > val2){
		for (val2++; val1 > val2; val2++){
			std::cout << val2 << std::endl;
		}
	}
	else{
		for (val1++; val1 < val2; val1++){
			std::cout << val1 << std::endl;
		}
	}
	return 0;
}


