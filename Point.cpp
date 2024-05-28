#include "point.h"

Point::Point(string name)
{
	this->name = name;
	this->x = 0;
	this->y = 0;
}

double Point::distanceBetween(Point a, Point b)
{
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

Point::Point(double x, double y, string name) :Point(name)
{
	this->x = x;
	this->y = y;
}

string Point::toString() const
{
	return this->name + "(" + to_string(this->x) + ", " + to_string(this->y) + ")";
}

void Point::move(double x, double y)
{
	this->x += x;
	this->y += y;
}

double Point::distanceTo(Point other)
{
	other.name = "NotA";
	return Point::distanceBetween(*this, other);
}