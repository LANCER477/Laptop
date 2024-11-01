#include "GPU.h"
#include <iostream>

GPU::GPU(const char* m, double pr)
{
    model = new char[strlen(m) + 1];
    strcpy_s(model, strlen(m) + 1, m);
    price = pr;
}

const char* GPU::GetModel()
{
    return model;
}

double GPU::GetPrice()
{
    return price;
}

void GPU::SetPrice(double pr)
{
    price = pr;
}

GPU::~GPU()
{
    delete[] model;
}