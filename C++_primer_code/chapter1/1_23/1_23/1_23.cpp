// 1_23.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	int num;
	Sales_item item1,item2;
	if (cin >> item1){
		while (cin>>item2)
		{
			if (compareIsbn(item1, item2)){
				num++;
			}
			else
			{
				cout << "ISBN��Ϊ" << item1.isbn() << "���У�" << num << "����" << endl;
				item1 = item2;
				num = 1;
			}
		}
		cout << "ISBN��Ϊ" << item1.isbn() << "���У�" << num << "����" << endl;
	}
	else
	{
		cout << "��" << endl;
		return -1;
	}
	return 0;
}

