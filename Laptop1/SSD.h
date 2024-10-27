#pragma once
class SSD
{
protected:
    char* model;
    double price;
public:
    SSD(const char* m, double pr);
    const char* GetModel();
    double GetPrice();
    void SetPrice(double pr);
    ~SSD();
};