// 3_2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using std::string; using std::cin; using std::cout;
//�ӱ�׼������һ�ζ���һ���У�Ȼ���޸ĸó���ʹ��һ�ζ���һ����
int main(){
	string res;
	char x;
	while (cin>>x){
		res += x;
	}
	cout << res;
}