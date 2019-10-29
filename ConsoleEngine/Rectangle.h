#pragma once
#include "Shape.h"
class Point;
class Rectangle : Shape
{
private:
	int width;
	int height;
public:
	Rectangle(Point position, int width, int height);
	Rectangle();
	~Rectangle();
	int GetWidth();
	int GetHeight();
};

