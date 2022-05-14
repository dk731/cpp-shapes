#include <iostream>
#include <vector>

#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"

int main()
{
	std::vector<Shape*> elements;

	elements.push_back(new Rectangle(2.3f, 4.5f));
	elements.push_back(new Rectangle(5.5f, 4.4f));
	elements.push_back(new Rectangle(3, 5));

	elements.push_back(new Triangle(5, 4, 3));
	elements.push_back(new Triangle(6, 6, 6));
	elements.push_back(new Triangle(10.2f, 15.2f, 9.2f));

	elements.push_back(new Square(7));
	elements.push_back(new Square(3));
	elements.push_back(new Square(12.2f));

	for (auto item : elements)
	{
		item->display();
		item->draw();
	}

	// Clear pointers
	for (auto pt : elements)
		delete pt;

	return 0;
}