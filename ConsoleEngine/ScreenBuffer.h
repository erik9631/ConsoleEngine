#pragma once
#include "Rectangle.h"
class ScreenBuffer
{
	Rectangle size;
	char* buffer;
public:
	Rectangle& GetSize();
	ScreenBuffer(int size);
	ScreenBuffer(Rectangle size);
	~ScreenBuffer();
};

