// 3_24.cpp : �������̨Ӧ�ó������ڵ㡣
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
//2.24

int main()
{
	vector<int> val;
	int x;
	while (cin >> x){
		val.push_back(x);
	}
	if (val.cbegin() == val.cend()){
		cout << "��Ԫ�ء�" << endl;
		return -1;
	}
	cout << "��β��Ԫ��Ϊ��" << endl;
	auto beg = val.begin();
	auto end = val.end();
	//�����it���㵽������������е�
	//it != beg + (end - beg) / 2

	for (auto it = beg; it != beg + (end - beg) / 2; it++){
		cout << (*it + *(beg + (end - it) - 1))<<" ";//�˴�����beg���ڴ�λ�ã���һ����0��ʼ

		if ((it - beg + 1) % 5 == 0){
			cout << endl;
		}
	}
	if (val.size() % 2 == 0){
		cout << *(beg + (end - beg)/2) ;
	}
	return 0;
}

//int main()
//{
//	vector<int> val;
//	int x;
//	while (cin >>x){
//		val.push_back(x);
//	}
//	if (val.cbegin() == val.cend()){
//		cout << "��Ԫ�ء�" << endl;
//		return -1;
//	}
//	//ͨ��auto�����ƶ�
//	for (auto it = val.cbegin(); it != val.cend()-1; it++){
//		cout << (*it + *(++it))<<" ";
//
//		if ((it - val.cbegin() + 1) % 10 == 0){
//			cout << endl;
//		}
//	}
//	//int text;
//	//cin >> text;
//	if (val.size() % 2 != 0){
//		cout << *(val.cend() - 1);
//	}
//	return 0;
//}

//3.20

//int main()
//{
//	vector<int> val;
//	int x;
//	while (cin >>x){
//		val.push_back(x);
//	}
//	if (val.size() == 0){
//		cout << "��Ԫ��" << endl;
//		return -1;
//	}
//	for (decltype(val.size()) i = 0; i < val.size() - 1; i += 2){
//		cout << val[i] + val[i + 1] << endl;
//	}
//	if (val.size() % 2 != 0){
//		cout << val[val.size()-1] << endl;
//	}
//	return 0;
//}

//�ڶ���
//int main()
//{
//	vector<int> val;
//	int x;
//	while (cin >> x){
//		val.push_back(x);
//	}
//	if (val.size() == 0){
//		cout << "��Ԫ��" << endl;
//		return -1;
//	}
//	cout << val[0] << endl;
//	cout << val[val.size() - 1] << endl;
//	for (decltype(val.size()) i = 1; i < val.size() - 2; i += 2){
//		cout << val[i] + val[i + 1] << endl;
//	}
//	if (val.size() % 2 != 0){
//		cout << val[val.size() - 2] << endl;
//	}
//	return 0;
//}

