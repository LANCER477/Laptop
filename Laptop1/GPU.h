#pragma once
class GPU
{
protected:
    char* model;
    double price;
public:
    GPU(const char* m, double pr);
    const char* GetModel();
    double GetPrice();
    void SetPrice(double pr);
    ~GPU();
};