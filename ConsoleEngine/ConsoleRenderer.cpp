#include "ConsoleRenderer.h"
#include "ScreenBuffer.h"


ConsoleRenderer::ConsoleRenderer(Rectangle clippingRegion, ScreenBuffer & targetBuffer) : targetBuffer(targetBuffer)
{
	this->clippingRegion = clippingRegion;
}

void ConsoleRenderer::DrawLine(Point point1, Point point2)
{

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
