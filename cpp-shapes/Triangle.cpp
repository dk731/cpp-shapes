#include "Triangle.h"

Triangle::Triangle(float e1, float e2, float e3): e1(e1), e2(e2), e3(e3), Shape()
{
}

void Triangle::display()
{
	float p = (this->e1 + this->e2 + this->e3) / 2.0f;
	float my_area = sqrt(p * (p - this->e1) * (p - this->e2) * (p - this->e3));

	std::cout << "Triangle edge 1: " << this->e1 << "; edge 2: " << this->e2 << "; edge 3: " << this->e3 << "; area: " << my_area << std::endl;
}

void Triangle::draw()
{
	std::cout << "Draw Triangle" << std::endl;
}
