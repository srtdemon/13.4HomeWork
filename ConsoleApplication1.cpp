#include <iostream>
#include <math.h>


class Vector
{
public:
	Vector() : x(1), y(4), z(2)
	{}
	void VivodCoord()
	{
		std::cout << "x = " << x << ",y = " << y << ",z = " << z << '\n';
	}
	double Module(double x, double y,double z)
	{
		return sqrt(x * x + y * y + z * z);
	}
private:
	double x, y, z;
};

int main()
{
	double xC, yC, zC;
	std::cout << "Input custom x, y and z";
	std::cin >> xC >> yC >> zC;
	Vector first;
	first.VivodCoord();
	std::cout << "Module of custom vector = " << first.Module(xC, yC, zC);
	return 0;
}