#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
	Point pointA(2, 6);
	Point pointB(7, 6);
	Point pointC = pointB - pointA;

	cout << pointC.GetX()  << " " <<pointC.GetY() <<endl;

	system("PAUSE");
	return 0;
}