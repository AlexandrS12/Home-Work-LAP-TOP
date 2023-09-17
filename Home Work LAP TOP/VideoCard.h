#pragma once
class VideoCard
{
	char* name;
	char* creator;
	int price;
public:
	VideoCard();
	VideoCard(const char* n, const char* c, int pr4);
	VideoCard(const VideoCard& obj4);
	void Print();
	~VideoCard();


	char* GetName() const;
	char* GetCreator() const;
	int GetPrice() const;
	void SetName(char* n);
	void SetCreator(char* c);
	void SetPrice(double pr4);
};

