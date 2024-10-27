#include "Mouse.h"
#include <iostream>

Mouse::Mouse(const char* m, double pr)
{
    model = new char[strlen(m) + 1];
    strcpy_s(model, strlen(m) + 1, m);
    price = pr;
}

const char* Mouse::GetModel()
{
    return model;
}

double Mouse::GetPrice()
{
    return price;
}

void Mouse::SetPrice(double pr)
{
    price = pr;
}

Mouse::~Mouse()
{
    delete[] model;
}