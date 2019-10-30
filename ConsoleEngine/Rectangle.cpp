#include "Rectangle.h"
#include "Point.h"

cnr::Rectangle::Rectangle(cnr::Point position, int width, int height) : Shape(position)
{
	this->position = position;
	this->height = height;
	this->width = width;
}

cnr::Rectangle::Rectangle(int width, int height) : Shape(Point(0, 0))
{
	this->height = height;
	this->width = width;
}

cnr::Rectangle::Rectangle() : Shape(Point(0, 0))
{
	width = 0;
	height = 0;
}

cnr::Rectangle::~Rectangle()
{
}

int cnr::Rectangle::GetWidth()
{
	return width;
}

int cnr::Rectangle::GetHeight()
{
	return height;
}
