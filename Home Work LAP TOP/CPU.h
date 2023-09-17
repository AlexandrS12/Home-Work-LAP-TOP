#pragma once
class CPU
{
	char* name;
	char* creator;
	int price;
public:
	CPU();
	CPU(const char* n, const char* c, int pr1);
	CPU(const CPU& obj1);
	void Print();
	~CPU();


	char* GetName() const;
	char* GetCreator() const;
	int GetPrice() const;
	void SetName(char* n);
	void SetCreator(char* c);
	void SetPrice(double pr1);
};

