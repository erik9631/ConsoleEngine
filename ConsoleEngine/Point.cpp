#include "Point.h"

cnr::Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

cnr::Point::Point()
{
}

int cnr::Point::GetX()
{
	return x;
}

int cnr::Point::GetY()
{
	return y;
}

void cnr::Point::SetX(int x)
{
	this->x = x;
}

void cnr::Point::SetY(int y)
{
	this->y = y;
}

void cnr::Point::SetPosition(int x, int y)
{
	this->x = x;
	this->y = y;
}

cnr::Point cnr::Point::operator-(cnr::Point & point)
{
	return Point(this->GetX() - point.GetX(), this->GetY() - point.GetY());
}

cnr::Point::~Point()
{
}
