// 3_41-42.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int main()
{
	//3.41 ���������ʼ��һ��vector����
	//int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//for (auto x : arr){
	//	cout << x << endl;
	//}
	//vector<int> vec (begin(arr), end(arr));
	//for (auto y : vec){
	//	cout << y << endl;
	//}
	//return 0;

	//3.42 ����������Ԫ�ص�vector������һ������
	vector <int> vect = { 2, 4, 2, 3, 4, 54, 4, 23, 3, 2, 32, 3 };
	int arrx[12];
	auto it = vect.cbegin();
	for (auto &x : arrx){
		x = *it;
		it++;
		cout << x << " ";
	}cout << endl;

	for (auto y : arrx){
		cout << y << " ";
	}cout << endl;

	return 0;

}