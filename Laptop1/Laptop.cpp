#include "Laptop.h"
#include <iostream>
using namespace std;

Laptop::Laptop(const char* n, double pr, const char* mcpu, double prcpu, const char* mgpu, double prgpu, const char* mram, double prram, const char* mssd, double prssd, const char* mm, double prm) : cpu(mcpu, prcpu), gpu(mgpu, prgpu), ram(mram, prram), ssd(mssd, prssd), mouse(mm,prm)
{
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    price = pr;
}

double Laptop::GetPrice()
{
    return price + cpu.GetPrice() + gpu.GetPrice() + ram.GetPrice() + ssd.GetPrice() + mouse.GetPrice();
}

void Laptop::Output()
{
    cout << "Model: " << name << endl
        << "|CPU: " << cpu.GetModel() << "|" << endl
        << "|GPU: " << gpu.GetModel() << "|" << endl
        << "|RAM: " << ram.GetModel() << "|" << endl
        << "|SSD: " << ssd.GetModel() << "|" << endl
        << "|Mouse: " << mouse.GetModel() << "|" << endl
        << "Laptop PRICE = " << GetPrice() << endl
        << "Mouse PRICE = " << mouse.GetPrice() << endl;
}

Laptop::~Laptop()
{
    delete[] name;
}