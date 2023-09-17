#include <iostream>
#include "Laptop.h"
using namespace std;

int Laptop::counter = 0;




int main()
{
	Laptop laptop1("Acer Nitro 5", "Black", 32000,
		"Core i7", "intel" , 6500,
		"Kingston 512", "Kingston", 2900,
		"Nvidia", "GTX 1080",6500,
		"Kingston Fury", "DDR4", 1000);
	Laptop laptop2("Asus F640", "Silver", 25000,
		"Core i7-74320", "Intel" , 4000,
		"Kingston 256", "Kingston", 2000,
		"Nvidia", "GTX 560", 3500,
		"Kingston Fury", "DDR3", 900);
	//Laptop laptop3();
	cout << endl << endl;
	
	laptop1.Print();
	laptop1.CalculateAllComponentsPrice();
	cout << endl;

	laptop2.Print();
	laptop2.CalculateAllComponentsPrice();
	cout << endl;

	Laptop::ShowNumberOfLaptops();
}