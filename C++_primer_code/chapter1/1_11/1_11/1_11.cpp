// 1_11.cpp : �������̨Ӧ�ó������ڵ㡣
//

//�û�����2��������ӡ���������
#include "stdafx.h"
#include<iostream>
int main()
{
	int i, j;
	std::cout << "����2��������" << std::endl;
	std::cin >> i >> j;
	if (i > j){
		j++;
		while (i != j){
			std::cout << j++<<std::endl;
		}
	}
	else{
		i++;
		while (i != j){
			std::cout << i++ << std::endl;
		}
	}
	return 0;
}

