#include "stdafx.h"
#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item ite1, ite2;
	std::cout << "������������";
	std::cin >> ite1 >> ite2;
	if (compareIsbn(ite1, ite2)){
		std::cout << ite1 << ite2 << std::endl;
	}
	else{
		std::cout << "�������󲻵ȡ�" << std::endl;
	}
	return 0;
}
