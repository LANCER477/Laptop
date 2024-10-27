#pragma once
class RAM
{
protected:
    char* model;
    double price;
public:
    RAM(const char* m, double pr);
    const char* GetModel();
    double GetPrice();
    void SetPrice(double pr);
    ~RAM();
};