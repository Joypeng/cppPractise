// 3_39-40.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
//3.39
//int main()
//{
//	
//	//C++���
//	//string str1, str2;
//	//cout << "������:" << endl;
//	//cin >> str1 >> str2;
//	//if (str1 > str2){
//	//	cout << "��һ�����ڵڶ�����" << endl;
//	//}
//	//else if (str1 < str2)
//	//{
//	//	cout << "��һ��С�ڵڶ�����" << endl;
//	//}
//	//else
//	//	cout << "���" << endl;
//
//	//return 0;
//
//	//C����ַ���
//	char str1[50], str2[50];
//	cin >> str1 >> str2;
//	auto result = strcmp(str1, str2);
//	switch (result)
//	{
//	case 1:cout << "��һ�����ڵڶ�����" << endl; break;
//	case -1:cout << "��һ��С�ڵڶ�����" << endl; break;
//	case 0:cout << "���" << endl; break;
//	default:cout << "��������ܵ�������ȥ�ˣ���= =��" << endl;
//		break;
//	}
//
//	return 0;
//}

//3.40
int main(){
	char str1[40];
	char str2[40];
	char str3[80] = {" "};
	cout << "���������ַ��������Ȳ�����40" << endl;
	cin >> str1 >> str2;
	strcpy(str3, str1); 
	strcat(str3, str2);
	cout << "���Ӻ���ַ�����" << str3 << endl;
	return 0;
}