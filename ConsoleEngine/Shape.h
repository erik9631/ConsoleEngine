#pragma once
#include "Point.h"
class Shape
{
protected:
	Point position;
	Shape(Point position);
public:
	Point GetPosition();
	~Shape();
};

