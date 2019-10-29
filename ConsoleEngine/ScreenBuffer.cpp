#include "ScreenBuffer.h"



Rectangle & ScreenBuffer::GetSize()
{
	return size;
}

ScreenBuffer::ScreenBuffer(int size)
{
	buffer = new char[size];
}

ScreenBuffer::ScreenBuffer(Rectangle size)
{
	buffer = new char[size.GetWidth() * size.GetHeight()];
}

ScreenBuffer::~ScreenBuffer()
{
}
