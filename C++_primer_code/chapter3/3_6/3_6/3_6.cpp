// 3_6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using std::string; using std::cin; using std::cout; using std::endl; using std::getline;
/*
3.6
ʹ�÷�Χfor��佫�ַ����������ַ���X����
*/
//int main(){
//	string x;
//	getline(cin, x);
//	//cin >> x;
//	for (auto &c : x){
//		c = 'X';
//	}
//	cout << x<<endl;
//}

/*
3.8
�ֱ�ʹ��while��for��д3.6
1.while
2.for
*/
//int main(){
//	string x;
//	int i = 0;
//	getline(cin, x);
//	while (i < x.size()){
//		x[i] = 'X';
//		i++;
//	}
//	cout << x << endl;
//	return 0;
//}

int main(){
	string x;
	getline(cin, x);
	for (int u = 0; u < x.size(); u++){
		x[u] = 'X';
	}
	cout << x << endl;
	//3.9
	//cout << x[0] << endl;
	return 0;
}