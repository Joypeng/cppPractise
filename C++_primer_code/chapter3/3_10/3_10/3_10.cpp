// 3_10.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<cctype>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
int main(){
	string more;
	getline(cin, more);
	for (auto &x : more){
		if (!ispunct(x)){
			cout << x;
		}
	}
	return 0;
}