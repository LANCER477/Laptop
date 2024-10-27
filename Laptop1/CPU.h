#pragma once
class CPU
{
protected:
	char* model;
	double price;
public:
	CPU(const char* m, double pr);
	const char* GetModel();
	double GetPrice();
	void SetPrice(double pr);
	~CPU();
};
