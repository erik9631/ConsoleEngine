#pragma once
#include "Shape.h"

namespace cnr
{
	class Point;
	class Rectangle : cnr::Shape
	{
	private:
		int width;
		int height;
	public:
		Rectangle(Point position, int width, int height);
		Rectangle(int width, int height);
		Rectangle();
		~Rectangle();
		int GetWidth();
		int GetHeight();
	};


}
