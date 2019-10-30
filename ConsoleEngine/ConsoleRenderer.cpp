#include "ConsoleRenderer.h"
#include "ScreenBuffer.h"
#include <cmath>
using namespace cnr;

void ConsoleRenderer::DrawLineFromX(Point vector2, Point startingPoint)
{
	int absoluteDistanceX = abs(vector2.GetX());
	int absoluteDistanceY = abs(vector2.GetY());

	int xDirection = vector2.GetX() / vector2.GetX(); // Negative or positive direction
	int yDirection = vector2.GetY() / vector2.GetY();

	double xyRatioReal = (double)vector2.GetX() / (double)vector2.GetY();
	int xyRatio = int(xyRatioReal);
	double remainder = 0;

	/*for (int ix = 1, iy = 1; ix <= absoluteDistanceX;)
	{
		targetBuffer.GetChar(ix - 1 + startingPoint.GetX(), iy - 1 + startingPoint.GetY()) = '*';
		if (ix % xyRatio)
			ix += xDirection;
		else
		{
			iy += yDirection;
			ix += xDirection;
		}
		remainder += xyRatioReal - (double)xyRatio;
		if(xyRatio)

	}*/
}

void ConsoleRenderer::DrawLineFromY(Point vector2, Point startingPoint)
{
	int absoluteDistanceX = abs(vector2.GetX());
	int absoluteDistanceY = abs(vector2.GetY());

	int xDirection = vector2.GetX() / vector2.GetX(); // Negative or positive direction
	int yDirection = vector2.GetY() / vector2.GetY();

	int yxRatio = vector2.GetY() / vector2.GetX();

	for (int iy = 1, ix = 1; iy <= absoluteDistanceX;)
	{
		targetBuffer.GetChar(ix - 1 + startingPoint.GetX(), iy - 1 + startingPoint.GetY()) = '*';
		if (iy % yxRatio)
			iy += yDirection;
		else
		{
			ix += xDirection;
			iy += yDirection;
		}

	}
}

void ConsoleRenderer::DrawBresenHam(int x1, int y1, int x2, int y2)
{
	int m_new = 2 * (y2 - y1);
	int slope_error_new = m_new - (x2 - x1);
	for (int x = x1, y = y1; x <= x2; x++)
	{
		//cout << "(" << x << "," << y << ")\n";
		targetBuffer.GetChar(x, y) = '*';
		// Add slope to increment angle formed 
		slope_error_new += m_new;

		// Slope error reached limit, time to 
		// increment y and update slope error. 
		if (slope_error_new >= 0)
		{
			y++;
			slope_error_new -= 2 * (x2 - x1);
		}
	}
}

ConsoleRenderer::ConsoleRenderer(Rectangle clippingRegion, ScreenBuffer & targetBuffer) : targetBuffer(targetBuffer)
{
	this->clippingRegion = clippingRegion;
}

/*
  Use bresenhams algorithm
*/

void ConsoleRenderer::DrawLine(Point point1, Point point2)
{
	Point relativeOffset = point2 - point1;

	DrawBresenHam(point1.GetX(), point1.GetY(), point2.GetX(), point2.GetY());
	/*int xyRatio = relativeOffset.GetX() / relativeOffset.GetY();

	if (relativeOffset.GetX() / relativeOffset.GetY())
		DrawLineFromX(relativeOffset, point1);
	else
		DrawLineFromY(relativeOffset, point1);*/

}

/*void Renderer::CreateFromConsole(Console& console)
{
	clippingRegion = Rectangle(Point(0, 0), console.GetWidth(), console.GetHeight());
	targetBuffer = Console.GetBuffer();
}*/

ConsoleRenderer::ConsoleRenderer(ScreenBuffer & targetBuffer) : targetBuffer(targetBuffer)
{
	clippingRegion = Rectangle(Point(0, 0), targetBuffer.GetSize().GetWidth(), targetBuffer.GetSize().GetHeight());
}

ConsoleRenderer::~ConsoleRenderer()
{
}
