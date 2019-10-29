#pragma once
#include "Rectangle.h"
class Console;
class ScreenBuffer;
class ConsoleRenderer
{
private:
	ScreenBuffer& targetBuffer;
	Rectangle clippingRegion;
public:
	ConsoleRenderer(Rectangle clippingRegion, ScreenBuffer& targetBuffer);
	void DrawLine(Point point1, Point point2);
	//static Renderer CreateFromConsole(Console& console);
	ConsoleRenderer(ScreenBuffer& targetBuffer);
	~ConsoleRenderer();
};

