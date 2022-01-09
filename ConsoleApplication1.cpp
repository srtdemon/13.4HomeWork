#include <iostream>
#include "Helpers.h"
#include <iomanip>
#include <string>


const int N = 100;

int Vivod(int a) 
{
	
	for (size_t i = a; i <= N; i += 2)
	{
		std::cout << i << '\n';
	}
	return 0;
}

int main()
{
	int type;
	std::cout << "Enter 0 for even number and 1 for odd number" << '\n';
	std::cin >> type;
	Vivod(type);
	return 0;
}