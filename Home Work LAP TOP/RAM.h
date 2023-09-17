#pragma once
class RAM
{
	char* name;
	char* creator;
	int price;
public:
	RAM();
	RAM(const char* n, const char* c, int pr2);
	RAM(const RAM& obj2);
	void Print();
	~RAM();

	char* GetName() const;
	char* GetCreator() const;
	int GetPrice() const;
	void SetName(char* n);
	void SetCreator(char* c);
	void SetPrice(double pr2);
};

