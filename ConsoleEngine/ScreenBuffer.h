#pragma once
#include "Rectangle.h"
class ScreenBuffer
{
	cnr::Rectangle size;
	int bufferSize;
	char* buffer;
public:
	cnr::Rectangle& GetSize();
	ScreenBuffer(cnr::Rectangle size);
	char& GetChar(int x, int y);
	void Clear(char background);
	void Clear();
	char* GetBuffer();
	~ScreenBuffer();
};

