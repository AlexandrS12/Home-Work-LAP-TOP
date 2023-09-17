#include "CPU.h"
#include <iostream>
using namespace std;

CPU::CPU()
{
	name = nullptr;
	creator = nullptr;
	price = 0;
	cout << "Constructor by defolt!" << endl;
}
CPU::CPU(const char* n, const char* c, int pr1)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	creator = new char[strlen(c) + 1];
	strcpy_s(creator, strlen(c) + 1, c);
	price = pr1;
	cout << "Constructor with parameters"<<endl;
}

CPU::CPU(const CPU& obj1)//constructor copyyy
{
	name = new char[strlen(obj1.name) + 1];
	strcpy_s(name, strlen(obj1.name) + 1, obj1.name);
	creator = new char[strlen(obj1.creator) + 1];
	strcpy_s(creator, strlen(obj1.creator) + 1, obj1.creator);
	price = obj1.price;
}

void CPU::Print()
{
	cout << "Name: " << name << "\tCreator: " << creator << "\tPrice: " << price << endl;
}

CPU::~CPU()
{
	delete[] name;
	delete[] creator;
	cout << "Destructor"<<endl;
}

char* CPU::GetName() const
{
	return name;
}

char* CPU::GetCreator() const
{
	return creator;
}

int CPU::GetPrice() const
{
	return price;
}

void CPU::SetName(char* n)
{
	if (name != nullptr) {
		cout << name << "...delete\n";
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void CPU::SetCreator(char* c)
{
	if (creator != nullptr) {
		cout << creator << "...delete\n";
		delete[] creator;
	}
	creator = new char[strlen(c) + 1];
	strcpy_s(creator, strlen(c) + 1, c);
}

void CPU::SetPrice(double pr1)
{
	if (pr1 <= 0) {
		cout << "Error! Enter n>0!" << endl;
	}
	else {
		price = pr1;
	}
}
