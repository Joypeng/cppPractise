//classdefine.h
#include "stdafx.h"
#include<iostream>
#include<string>
using std::string;

//����Ҿ���
class Furniture
{
	string type, material;
	double price;
public:
	Furniture(string type, string material, double price)
	{
		this->type = type;
		this->material = material;
		this->price = price;
	}
	string getType(){ return type; }
	string getMaterial(){ return material; }
	double getPrice(){ return price; }
};

class Sofa :public Furniture
{
	int seats;
public:
	Sofa(string material, double price, int seats) :Furniture("ɳ��", material, price){
		this->seats = seats;
	}
	int getSeats(){ return seats; }
};

class skinSofa :public Sofa
{
	string skinType;
public:
	skinSofa(double price, int seats, string skinType) :Sofa("Ƥ��", price, seats)
	{
		this->skinType = skinType;
	}
	string getSkinType(){ return skinType; }
};