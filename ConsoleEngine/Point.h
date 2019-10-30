#pragma once
namespace cnr
{
	class Point
	{
		int x;
		int y;
	public:
		Point(int x, int y);
		Point();
		int GetX();
		int GetY();
		void SetX(int x);
		void SetY(int y);
		void SetPosition(int x, int y);
		Point operator - (Point& point);
		~Point();
	};

}
