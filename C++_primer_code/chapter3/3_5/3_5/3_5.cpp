// 3_5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using std::string; using std::cin; using std::cout; using std::endl;
/*
�ӱ�׼�����ж������ַ�����
��������������һ�������
Ȼ���޸ĳ����ÿո�ֿ��ַ�����
*/
int main(){
	string x,y;
	y = "";
	while (cin >> x){
		//y += x;
		//����
		y = y + x + " ";
	}
	cout << y << endl;
}

