// 3_4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using std::string; using std::cin; using std::cout; using std::endl;
//���������ַ������Ƚ����Ƿ���Ȳ���������������ȣ������ġ�
int main(){
	string x, y;
	cin >> x;
	cin >> y;
	cout << x.size() << "  " << y.size()<<endl;
	//�ĳɱȽϵȳ����ǣ�
	//if(x.size()==y.size())
	if (x == y)
		return -1;
	else
	{
		if (x.size()>y.size())
		{
			cout << x << endl;
		}
		else if (x.size() < y.size()){
			cout << y << endl;
		}
		else
		{
			cout << x << "++++++++++" << y<<endl;
		}
	}
		
	return 0;
}