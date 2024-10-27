#include "CPU.h"
#include<iostream>
using namespace std;

CPU::CPU(const char* m, double pr)
{
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
	price = pr;
}

const char* CPU::GetModel()
{
	return model;
}

double CPU::GetPrice()
{
	return price;
}

void CPU::SetPrice(double pr)
{
	price = pr;
}

CPU::~CPU()
{
	delete[]model;
}