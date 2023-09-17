#pragma once
#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "VideoCard.h"

class Laptop
{
	char* name;
	char* color;
	int price;
	CPU cpu;
	SSD ssd;
	VideoCard gpu;
	RAM ram;
public:
	static int counter;
	Laptop();
	Laptop(const char* n, const char* c, int pr,
		const char* cpuName, const char* cpuCreator, int cpuPrice,
		const char* ssdName, const char* ssdCreator, int ssdPrice,
		const char* gpuName, const char* gpuCreator, int gpuPrice,
		const char* ramName, const char* ramCreator, int ramPrice);
	Laptop(const Laptop& obj);
	void Print();
	~Laptop();

	void CalculateAllComponentsPrice() const;
	static void ShowNumberOfLaptops();
};

