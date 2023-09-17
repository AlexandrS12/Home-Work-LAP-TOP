#include "Laptop.h"
#include <iostream>
using namespace std;


Laptop::Laptop()
{
	name = nullptr;
	color = nullptr;
	price = 0;
	CPU cpu;
	SSD ssd;
	VideoCard gpu;
	RAM ram;
	cout << "Constructor by default\n";
}

Laptop::Laptop(const char* n, const char* c, int pr,
	const char* cpuName, const char* cpuCreator, int cpuPrice,
	const char* ssdName, const char* ssdCreator, int ssdPrice,
	const char* gpuName, const char* gpuCreator, int gpuPrice,
	const char* ramName, const char* ramCreator, int ramPrice) :
	cpu(cpuName, cpuCreator, cpuPrice),
	ssd(ssdName, ssdCreator, ssdPrice),
	gpu(gpuName, gpuCreator, gpuPrice),
	ram(ramName, ramCreator, ramPrice)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
	price = pr;
	++counter;
	cout << "Constructor with parameters\n";
}






Laptop::Laptop(const Laptop& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	color = new char[strlen(obj.color) + 1];
	strcpy_s(color, strlen(obj.color) + 1, obj.color);
	price = obj.price;

	cpu.SetName(obj.cpu.GetName());
	cpu.SetCreator(obj.cpu.GetCreator());
	cpu.SetPrice(obj.cpu.GetPrice());

	ssd.SetName(obj.ssd.GetName());
	ssd.SetCreator(obj.ssd.GetCreator());
	ssd.SetPrice(obj.cpu.GetPrice());

	gpu.SetName(obj.gpu.GetName());
	gpu.SetCreator(obj.gpu.GetCreator());
	gpu.SetPrice(obj.gpu.GetPrice());

	ram.SetName(obj.ram.GetName());
	ram.SetCreator(obj.ram.GetCreator());
	ram.SetPrice(obj.ram.GetPrice());
}

void Laptop::Print()
{
	cout << "Name: " << name << "\tColor: " << color << "\tPrice: " << price << endl;
	cout << "Name: " << name << "\tColor: " << color << "\tPrice: " << price << endl;

	cpu.Print();
	ssd.Print();
	gpu.Print();
	ram.Print();

}

Laptop::~Laptop()
{
	delete[] name;
	delete[] color;
	--counter;
	cout << "Destructor\n";
}

void Laptop::CalculateAllComponentsPrice() const
{
	cout << "Sum all: " << cpu.GetPrice() + ssd.GetPrice() + gpu.GetPrice() + ram.GetPrice() << endl; 
}

void Laptop::ShowNumberOfLaptops()
{
	cout << "Number of Laptops: " << counter << endl;
}
