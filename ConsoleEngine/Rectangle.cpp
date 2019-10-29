#include "Rectangle.h"
#include "Point.h"

Rectangle::Rectangle(Point position, int width, int height) : Shape(position)
{
	this->position = position;
	this->height = height;
	this->width = width;
}

Rectangle::Rectangle() : Shape(Point(0, 0))
{
	width = 0;
	height = 0;
}

Rectangle::~Rectangle()
{
}

int Rectangle::GetWidth()
{
	return width;
}

int Rectangle::GetHeight()
{
	return height;
}
