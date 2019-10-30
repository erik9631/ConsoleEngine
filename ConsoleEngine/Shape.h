#pragma once
#include "Point.h"
namespace cnr
{
	class Shape
	{
	protected:
		Point position;
		Shape(Point position);
	public:
		Point GetPosition();
		~Shape();
	};


}
