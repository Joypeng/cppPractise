// 1_22.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include"Sales_item.h"
using namespace std;
int main()
{
	Sales_item sum, tran;
	cout << "������������ISBN��¼" << endl;
	if (cin >> sum){
		while (cin >> tran){
			if (compareIsbn(tran, sum)){
				sum += tran;
			}
			else
				return -1;
		}
		cout << sum << endl;
	}
	else
		cout << "����" << endl;
		return -1;
	return 0;
}
