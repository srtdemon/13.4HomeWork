#include <iostream>
#include "Helpers.h"
#include <iomanip>
#include <string>


const int N = 4;

int main()
{
	int sum = 0;
	int F = 10%N; // ������� �� �������(������� 10� �����)
	int mass[N][N];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			mass[i][j] = i + j;
			std::cout << mass[i][j] << ' ';
		}
		std::cout << '\n';
	}

	for(int h = 0; h < N; h++)
	{
		sum += mass[F - 1][h];
	}

	std::cout << "summ of values = " << sum;
	
	return 0;
}