#include "SSD.h"
#include<iostream>
using namespace std;

SSD::SSD()
{
	name = nullptr;
	creator = nullptr;
	price = 0;
	cout << "Constructor by defolt!" << endl;
}

SSD::SSD(const char* n, const char* c, int pr3)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	creator = new char[strlen(c) + 1];
	strcpy_s(creator, strlen(c) + 1, c);
	price = pr3;
	cout << "Constructor with parameters" << endl;
}

SSD::SSD(const SSD& obj3)
{
	name = new char[strlen(obj3.name) + 1];
	strcpy_s(name, strlen(obj3.name) + 1, obj3.name);
	creator = new char[strlen(obj3.creator) + 1];
	strcpy_s(creator, strlen(obj3.creator) + 1, obj3.creator);
	price = obj3.price;
}

void SSD::Print()
{
	cout << "Name: " << name << "\tCreator: " << creator << "\tPrice: " << price << endl;
}

SSD::~SSD()
{
	delete[] name;
	delete[] creator;
	cout << "Destructor" << endl;
}

char* SSD::GetName() const
{
	return name;
}

char* SSD::GetCreator() const
{
	return creator;
}

int SSD::GetPrice() const
{
	return price;
}

void SSD::SetName(char* n)
{
	if (name != nullptr) {
		cout << name << "...delete\n";
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void SSD::SetCreator(char* c)
{
	if (creator != nullptr) {
		cout << creator << "...delete\n";
		delete[] creator;
	}
	creator = new char[strlen(c) + 1];
	strcpy_s(creator, strlen(c) + 1, c);
}

void SSD::SetPrice(double pr3)
{
	if (pr3 <= 0) {
		cout << "Error! Enter n>0!" << endl;
	}
	else {
		price = pr3;
	}
}