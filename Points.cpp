#include <iostream>
#include "point.h"

int main()
{
    Point pointA(2, 3, "O");
    cout << pointA.toString();
    Point pointB("A");
    cout << pointB.toString();
    cout << Point::distanceBetween(pointA, pointB);
    Point* p = &pointA;
    Point& q = pointA;
    q.move(1, 4);
    p->move(2, 3);
    (*p).move(2, 3);
    cout << endl;
    Point pointC();
    int* a = new int;
    Point* pnt = new Point;
    cout << endl;
    cout << pnt->toString();
    Point pointC = pointA;
    pointA.move(1, 2);
    cout << pointA.toString();
    int x = 2;
    int& xp = x;
    xp++;

}