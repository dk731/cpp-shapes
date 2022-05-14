#include "Rectangle.h"

Rectangle::Rectangle(float w, float h): w(w), h(h), Shape()
{
}

void Rectangle::display()
{
	std::cout << "Rectangle width: " << this->w << "; height: " << this->h << "; area: " << this->w * this->h << std::endl;
}

void Rectangle::draw()
{
	std::cout << "Draw Rectangle" << std::endl;
}
