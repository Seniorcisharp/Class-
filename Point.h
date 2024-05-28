#pragma once
#include <string>


using namespace std;

class Point
{
public:
	Point(double x, double y, string name);
	Point(string name);
	Point()
	{
		this->name = "O";
		this->x = 0;
		this->y = 0;
	}
	string toString() const;
	void move(double x, double y);
	double distanceTo(Point other);
	//getCoordinates(double x, double y);

	static double distanceBetween(Point a, Point b);
private:
	double x;
	double y;
	string name;
};