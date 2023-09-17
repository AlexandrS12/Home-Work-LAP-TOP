#include "RAM.h"
#include <iostream>
using namespace std;

RAM::RAM()
{
	name = nullptr;
	creator = nullptr;
	price = 0;
	cout << "Constructor by defolt!" << endl;
}

RAM::RAM(const char* n, const char* c, int pr2)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	creator = new char[strlen(c) + 1];
	strcpy_s(creator, strlen(c) + 1, c);
	price = pr2;
	cout << "Constructor with parameters" << endl;
}

RAM::RAM(const RAM& obj2)
{
	name = new char[strlen(obj2.name) + 1];
	strcpy_s(name, strlen(obj2.name) + 1, obj2.name);
	creator = new char[strlen(obj2.creator) + 1];
	strcpy_s(creator, strlen(obj2.creator) + 1, obj2.creator);
	price = obj2.price;
}

void RAM::Print()
{
	cout << "Name: " << name << "\tCreator: " << creator << "\tPrice: " << price << endl;
}

RAM::~RAM()
{
	delete[] name;
	delete[] creator;
	cout << "Destructor" << endl;
}

char* RAM::GetName() const
{
	return name;
}

char* RAM::GetCreator() const
{
	return creator;
}

int RAM::GetPrice() const
{
	return price;
}

void RAM::SetName(char* n)
{
	if (name != nullptr) {
		cout << name << "...delete\n";
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void RAM::SetCreator(char* c)
{
	if (creator != nullptr) {
		cout << creator << "...delete\n";
		delete[] creator;
	}
	creator = new char[strlen(c) + 1];
	strcpy_s(creator, strlen(c) + 1, c);
}

void RAM::SetPrice(double pr2)
{
	if (pr2 <= 0) {
		cout << "Error! Enter n>0!" << endl;
	}
	else {
		price = pr2;
	}
}
