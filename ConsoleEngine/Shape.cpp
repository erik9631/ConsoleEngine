#include "Shape.h"
using namespace cnr;

Shape::Shape(Point position)
{
	this->position = position;
}
Point Shape::GetPosition()
{
	return position;
}

Shape::~Shape()
{
}
