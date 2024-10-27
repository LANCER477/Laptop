#include "RAM.h"
#include <iostream>

RAM::RAM(const char* m, double pr)
{
    model = new char[strlen(m) + 1];
    strcpy_s(model, strlen(m) + 1, m);
    price = pr;
}

const char* RAM::GetModel()
{
    return model;
}

double RAM::GetPrice()
{
    return price;
}

void RAM::SetPrice(double pr)
{
    price = pr;
}

RAM::~RAM()
{
    delete[] model;
}