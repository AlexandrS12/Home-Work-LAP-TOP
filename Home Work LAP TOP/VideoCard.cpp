#include "VideoCard.h"
#include <iostream>
using namespace std;

VideoCard::VideoCard()
{
	name = nullptr;
	creator = nullptr;
	price = 0;
	cout << "Constructor by defolt!" << endl;
}

VideoCard::VideoCard(const char* n, const char* c, int pr4)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	creator = new char[strlen(c) + 1];
	strcpy_s(creator, strlen(c) + 1, c);
	price = pr4;
	cout << "Constructor with parameters" << endl;
}

VideoCard::VideoCard(const VideoCard& obj4)
{
	name = new char[strlen(obj4.name) + 1];
	strcpy_s(name, strlen(obj4.name) + 1, obj4.name);
	creator = new char[strlen(obj4.creator) + 1];
	strcpy_s(creator, strlen(obj4.creator) + 1, obj4.creator);
	price = obj4.price;
}

void VideoCard::Print()
{
	cout << "Name: " << name << "\tCreator: " << creator << "\tPrice: " << price << endl;
}

VideoCard::~VideoCard()
{
	delete[] name;
	delete[] creator;
	cout << "Destructor" << endl;
}

char* VideoCard::GetName() const
{
	return name;
}

char* VideoCard::GetCreator() const
{
	return creator;
}

int VideoCard::GetPrice() const
{
	return price;
}

void VideoCard::SetName(char* n)
{
	if (name != nullptr) {
		cout << name << "...delete\n";
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void VideoCard::SetCreator(char* c)
{
	if (creator != nullptr) {
		cout << creator << "...delete\n";
		delete[] creator;
	}
	creator = new char[strlen(c) + 1];
	strcpy_s(creator, strlen(c) + 1, c);
}

void VideoCard::SetPrice(double pr4)
{
	if (pr4 <= 0) {
		cout << "Error! Enter n>0!" << endl;
	}
	else {
		price = pr4;
	}
}