// 4_43-45.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
/*
3.43 3���汾�ĳ������ia��Ԫ�أ��ֱ�ʹ��
	Range For
	For �±�
	For ָ��
3.44 ʹ�����ͱ���
3.45 ʹ��auto
*/
int main()
{
	int arr[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	//3.43
	//for (int (&x)[4] : arr){
	//	for (int y : x){
	//		cout << y << " ";
	//	}cout << endl;
	//}

	//for (size_t i = 0; i != 3; i++){
	//	for (size_t j = 0; j != 4; j++){
	//		cout << arr[i][j] << " ";
	//	}cout << endl;
	//}

	//for (int(*p)[4] = arr; p != arr + 3; ++p){
	//	for (int *q = *p; q != *p + 4; q++){
	//		cout << *q << " ";
	//	}cout << endl;
	//}

	//3.44
	//using arrx = int[4];
	//for (arrx &arrxd : arr){
	//	for (int y : arrxd){
	//		cout << y << " ";
	//	}cout << endl;
	//}

	//cout << endl;

	//for (size_t i = 0; i != 3; i++){
	//	for (size_t j = 0; j != 4; j++){
	//		cout << arr[i][j] << " ";
	//	}cout << endl;
	//}

	//cout << endl;

	//for (arrx *p = arr; p != arr + 3; ++p){
	//	for (int *q = *p; q != *p + 4; q++){
	//		cout << *q << " ";
	//	}cout << endl;
	//}

	//3.45
	for (auto &arrxd : arr){
		for (auto y : arrxd){
			cout << y << " ";
		}cout << endl;
	}

	for (auto i = 0; i != 3; i++){
		for (auto j = 0; j != 4; j++){
			cout << arr[i][j] << " ";
		}cout << endl;
	}

	for (auto  *p = arr; p != arr + 3; ++p){
		for (auto *q = *p; q != *p + 4; q++){
			cout << *q << " ";
		}cout << endl;
	}

	return 0;
}