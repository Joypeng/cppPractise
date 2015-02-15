#include<iostream>
//���弯����
//�����ܱ�����Ա��ʵ��ָ�룬����������
//��������
//get�����������Ƿ�Ϊ�պ���,ȫ������Ϊ������
//���������麯�����жϣ��ӣ���
class IntSet{
protected:
	int *elem;
	int count;
	int capacity;
public:
	IntSet(int capacity = 100, int array[] = NULL, int count = 0);
	~IntSet(){ delete[]elem; }
	int getCount()const{ return count; }
	int getCapacity()const{ return capacity; }
	bool isEmpty()const{ return count == 0; }

	virtual bool isIntSet(int ele);
	virtual void add(int ele);
	virtual void remote(int ele);
	int get(int index);
};

//���������ࣺ���򼯺���
class OrderIntSet :public IntSet
{
public:
	OrderIntSet(int capacity = 100, int array = NULL, int count = 0);
	virtual bool isIntSet(int ele);
	virtual void add(int ele);
	virtual void remote(int ele);
};