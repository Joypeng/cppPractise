// deriveConReCon.cpp : �������̨Ӧ�ó������ڵ㡣
//
//������Ĺ��캯������������
#include "stdafx.h"
#include<iostream>
#include<string>
#include"classdefine.h"
using std::string;
using std::cout;
using std::endl; 
void show(Furniture *f)
{
	cout << "�Ҿ����ͣ�" << f->getType() << " �����ϣ�" 
		<< f->getMaterial() << " �۸�" << f->getPrice() << endl;
}
int _tmain(int argc, _TCHAR* argv[])
{
	Sofa sofa("����",50000,10);
	skinSofa skinsofa(20000, 5, "ţƤ");

	cout << "�Ҿ����ͣ�" << skinsofa.getType() << "\t"
		<< "���ϣ�" << skinsofa.getMaterial() << "\t"
		<< "�۸�" << skinsofa.getPrice() << "\t"
		<< "Ƥ�ƣ�" << skinsofa.getSkinType() << "\t"
		<< "������" << skinsofa.getSeats() << "\t"<<endl;
	
	//���������ָ���ʼ�������ָ��
	Furniture *sofa2 = new Sofa("�ֽ�",20000.0,2);
	show(&sofa);
	show(sofa2);
	return 0;
}

