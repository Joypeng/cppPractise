// 3_17.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
//#include<cctype>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
int main()
{
	cout << "������ܶ���ʣ�" << endl;
	vector<string> val;
	string x;
	while (getline(cin, x)){
		for (auto &c : x){
			c = toupper(c);
		}
		val.push_back(x);
	}
	for (auto m : val){
		cout << m << endl;
	}
	return 0;

}
