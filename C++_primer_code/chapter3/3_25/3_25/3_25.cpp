// 3_25.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main()
{
	vector<unsigned> scores(11);
	unsigned grade;
	auto it = scores.begin();
	cout << "����һ��ɼ�" << endl;
	while (cin >> grade){
		if (grade <= 100){
			++*(it + grade / 10);
		}
	}
	cout << "�ɼ��Ӹߵ�������Ϊ��" << endl;
	for (auto vt = scores.begin(); vt != scores.end(); vt++){
		cout << *(vt) << " ";
	}
	cout << endl;
	return 0;
}