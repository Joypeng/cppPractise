// 1_25.cpp : �������̨Ӧ�ó������ڵ㡣
//
//ͨ��������ISBN�ϲ�������total�ı����С�ʹ��tran���������ȡ��ÿ�����ۼ�¼��
#include "stdafx.h"
#include"Sales_item.h"
#include<iostream>
int main(){
	Sales_item total;
	if (std::cin >> total){
		Sales_item tran;
		while (std::cin >> tran){
			if (total.isbn() == tran.isbn()){
				total += tran;
			}
			else{
				std::cout << total << std::endl;
				total = tran;
			}
		}
		std::cout << total << std::endl;
	}
	else{
		std::cerr << "û�����ݣ�" << std::endl;
		return -1;
	}
	return 0;
}
