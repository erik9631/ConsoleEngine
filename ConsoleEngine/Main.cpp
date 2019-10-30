#include <iostream>
#include "Point.h"
#include "ScreenBuffer.h"
#include "Rectangle.h"
#include <Windows.h>
#include "ConsoleRenderer.h"

using namespace std;

void fillBuffer(CHAR_INFO* outputBuffer, ScreenBuffer& screenBuffer, int size)
{
	for (int i = 0; i < size; i++)
	{
		outputBuffer[i].Char.AsciiChar = screenBuffer.GetBuffer()[i];
		outputBuffer[i].Attributes = 0x0001 | 0x0002 | 0x0004;
	}
}

void printBuffer(ScreenBuffer& buffer)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	/*for (int iy = 0; iy < buffer.GetSize().GetHeight(); iy++)
	{
		for (int ix = 0; ix < buffer.GetSize().GetWidth(); ix++)
			cout << buffer.GetChar(ix, iy);
		cout << endl;
	}*/
	COORD size;
	size.X = buffer.GetSize().GetWidth();
	size.Y = buffer.GetSize().GetHeight();

	COORD cursorStartPos;
	cursorStartPos.X = 0;
	cursorStartPos.Y = 0;


	SMALL_RECT renderRegion;
	renderRegion.Top = 0;
	renderRegion.Left = 0;
	renderRegion.Bottom = 900;
	renderRegion.Right = 1440;
	CHAR_INFO* outputBuffer = new CHAR_INFO[ (buffer.GetSize().GetHeight() * buffer.GetSize().GetWidth())];
	fillBuffer(outputBuffer, buffer, buffer.GetSize().GetHeight() * buffer.GetSize().GetWidth());


	WriteConsoleOutput(consoleHandle, outputBuffer, size, cursorStartPos, &renderRegion);
}

int main()
{

	ScreenBuffer buffer = ScreenBuffer(cnr::Rectangle(100, 100));
	ConsoleRenderer renderer = ConsoleRenderer(buffer);
	buffer.Clear();
	renderer.DrawLine(cnr::Point(0, 0), cnr::Point(5, 15));
	//cout << buffer.GetSize().GetHeight() << " " << buffer.GetSize().GetWidth() << endl;
	printBuffer(buffer);

	getchar();
	return 0;
}