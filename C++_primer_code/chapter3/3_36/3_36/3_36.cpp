// 3_36.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int arr1[5], arr2[5];
	srand((unsigned)time(NULL));
	for (int i = 0; i < 5;i++){
		arr1[i] = rand() % 100;
	}
	for (int j = 0; j < 5; j++){
		arr2[j] = rand() % 100;
	}
	int *p = begin(arr1);
	int *q = begin(arr2);
	while (p != end(arr1) && q != end(arr2)){
		if (*p != *q){
			cout << "����" << endl;
			return -1;
		}
		p++; q++;
	}
	cout << "ȫ��" << endl;
	return 0;
}
