// 3_21.cpp : �������̨Ӧ�ó������ڵ㡣
//

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
	vector<int> v1, v2(10), v3(10, 42), v4{ 10 }, v5{ 10, 42 }, v6{ 10 };
	vector<string>v7{ 10, "hi" };
	cout << v1.size() << v2.size() << v7.size() << endl;
	if (v1.cbegin() != v1.cend()){
		cout << "v1��Ԫ�طֱ��ǣ�" << endl;
		for (auto it = v1.cbegin(); it != v1.cend();it++){
			cout << *it << " ";
		}
		cout << endl;
	}
}

/*
3.16
���3��13�е�vector
*/
//int main(){
//	vector<int> v1, v2(10), v3(10, 42), v4{ 10 }, v5{ 10, 42 }, v6{ 10 };
//	vector<string>v7{ 10, "hi" };
//	cout << v1.size() << v2.size() << v7.size() << endl;
//
//	for (auto i : v3){
//		cout << i;
//	}
//	cout << endl;
//	for (auto j : v5){
//		cout << j;
//	}
//	cout << endl;
//	for (auto k : v7){
//		cout << k;
//	}
//	cout << endl;
//	return 0;
//}
