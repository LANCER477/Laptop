#pragma once
class Mouse
{
protected:
    char* model;
    double price;
public:
    Mouse(const char* m, double pr);
    const char* GetModel();
    double GetPrice();
    void SetPrice(double pr);
    ~Mouse();
};

