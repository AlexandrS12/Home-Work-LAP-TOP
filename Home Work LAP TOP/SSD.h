#pragma once
class SSD
{
	char* name;
	char* creator;
	int price;
public:
	SSD();
	SSD(const char* n, const char* c, int pr3);
	SSD(const SSD& obj3);
	void Print();
	~SSD();

	char* GetName() const;
	char* GetCreator() const;
	int GetPrice() const;
	void SetName(char* n);
	void SetCreator(char* c);
	void SetPrice(double pr3);
};

