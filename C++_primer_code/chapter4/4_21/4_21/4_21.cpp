// 4_21.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	vector <int> odd;
	cout << "����һ�����֣�" << endl;
	int x;
	while (cin >> x){
		if (x % 2 == 0){
			odd.push_back(x);
		}
		else
		{
			x = x * 2;
			odd.push_back(x);
		}
	}

	for (auto y : odd){
		cout << y << " ";
	}cout << endl;

	return 0;
}
