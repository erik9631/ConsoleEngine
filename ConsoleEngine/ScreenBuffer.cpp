#include "ScreenBuffer.h"
#include <string>
using namespace cnr;

Rectangle & ScreenBuffer::GetSize()
{
	return size;
}

ScreenBuffer::ScreenBuffer(Rectangle size)
{
	bufferSize = size.GetWidth() * size.GetHeight();
	this->size = size;
	buffer = new char[bufferSize];
}

char & ScreenBuffer::GetChar(int x, int y)
{
	return buffer[x + (y*size.GetWidth())];
}

void ScreenBuffer::Clear()
{
	memset(buffer, ' ', bufferSize);
}

char * ScreenBuffer::GetBuffer()
{
	return buffer;
}

void ScreenBuffer::Clear(char background)
{
	memset(buffer, background, bufferSize);
}

ScreenBuffer::~ScreenBuffer()
{
}
