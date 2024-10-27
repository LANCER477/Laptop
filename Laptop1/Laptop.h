#pragma once
#include "CPU.h"
#include "GPU.h"
#include "RAM.h"
#include "SSD.h"
#include "Mouse.h"

class Laptop
{
protected:
    char* name;
    double price;
    CPU cpu;
    GPU gpu;
    RAM ram;
    SSD ssd;
    Mouse mouse;

public:
    Laptop(const char* n, double pr, const char* mcpu, double prcpu, const char* mgpu, double prgpu, const char* mram, double prram, const char* mssd, double prssd, const char* mm, double prm);
    double GetPrice();
    void Output();
    ~Laptop();
};