#include "Square.h"

Square::Square(float s): s(s), Shape()
{
}

void Square::display()
{
	std::cout << "Square side: " << this->s << "; area: " << this->s * this->s << std::endl;
}

void Square::draw()
{
	std::cout << "Draw Square" << std::endl;
}

