#include<iostream>
#include"Laptop.h"

using namespace std;

int main()
{
	Laptop laptop("Asus Zepherus", 540, "AMD Ryzen 5600x", 230, " RTX 3070TI", 350, "Corsair 64GB", 100, "Samsung 1TB", 350);
	laptop.Output();
}