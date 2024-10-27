#pragma once
#include "CPU.h"
#include "GPU.h"
#include "RAM.h"
#include "SSD.h"

class Laptop
{
protected:
    char* name;
    double price;
    CPU cpu;
    GPU gpu;
    RAM ram;
    SSD ssd;

public:
    Laptop(const char* n, double pr, const char* mcpu, double prcpu, const char* mgpu, double prgpu, const char* mram, double prram, const char* mssd, double prssd);
    double GetPrice();
    void Output();
    ~Laptop();
};