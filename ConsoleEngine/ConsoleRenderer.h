#pragma once
#include "Rectangle.h"
class Console;
class ScreenBuffer;
class ConsoleRenderer
{
private:
	ScreenBuffer& targetBuffer;
	cnr::Rectangle clippingRegion;
	void DrawLineFromX(cnr::Point vector2, cnr::Point startingPoint);
	void DrawLineFromY(cnr::Point vector2, cnr::Point startingPoint);
	void DrawBresenHam(int x1, int y1, int x2, int y2);
public:
	ConsoleRenderer(cnr::Rectangle clippingRegion, ScreenBuffer& targetBuffer);
	void DrawLine(cnr::Point point1, cnr::Point point2);
	//static Renderer CreateFromConsole(Console& console);
	ConsoleRenderer(ScreenBuffer& targetBuffer);
	~ConsoleRenderer();
};

