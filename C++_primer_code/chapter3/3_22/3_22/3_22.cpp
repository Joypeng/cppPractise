// 3_22.cpp : �������̨Ӧ�ó������ڵ㡣
//
//�޸��Ǹ����text����䣬��Ϊ�����д
#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
int main()
{
	vector<string> text;
	string s;

	while (getline(cin, s))
		text.push_back(s);

	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it){
		for (auto itx = it->begin(); itx != it->end(); ++itx){
			(*itx) = toupper(*itx);
		}
		cout << *it << endl;
	}
	return 0;
}
