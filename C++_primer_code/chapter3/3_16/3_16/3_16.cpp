// 3_16.cpp : �������̨Ӧ�ó������ڵ㡣
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
/*
���3��13�е�vector
*/
int main(){
	vector<int> v1, v2(10), v3(10, 42), v4{ 10 }, v5{ 10, 42 }, v6{ 10 };
	vector<string>v7{ 10, "hi" };
	cout << v1.size() << v2.size() << v7.size()<<endl;

	for (auto i : v3){
		cout << i;
	}
	cout << endl;
	for (auto j : v5){
		cout << j;
	}
	cout << endl;
	for(auto k:v7){
		cout << k;
	}
	cout << endl;
	return 0;
}