// 3_23.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include<ctime>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
//��дһ�γ��򣬴���һ������10��������vector����Ȼ��ʹ�õ�����������Ԫ�ر��ԭ����2��������vector���ݡ�
int main()
{
	vector<int > n;
	//ʹ�����������
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++){
		n.push_back(rand() % 1000);
	}
	cout << "�������:" << endl;
	for (auto x : n){
		cout << x << endl;
	}
	cout << "���뷭��������֣�" << endl;
	for (auto it = n.begin(); it != n.end(); it++){
		*it *= 2;
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}
