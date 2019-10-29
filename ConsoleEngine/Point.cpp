#include "Point.h"

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

Point::Point()
{
}

int Point::GetX()
{
	return x;
}

int Point::GetY()
{
	return y;
}

void Point::SetX(int x)
{
	this->x = x;
}

void Point::SetY(int y)
{
	this->y = y;
}

void Point::SetPosition(int x, int y)
{
	this->x = x;
	this->y = y;
}

Point Point::operator-(Point & point)
{
	return Point(this->GetX() - point.GetX(), this->GetY() - point.GetY());
}

Point::~Point()
{
}
