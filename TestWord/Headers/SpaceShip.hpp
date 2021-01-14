#include <graphics.h>
#include <Point.hpp>
class SpaceShip
{
public:
    float x, y;
    float t = 10;
    Point d[13];
    virtual void Line(Point a, Point b)
    {
        line(x + t * a.x, y + t * a.y, x + t * b.x,  y + t * b.y);
    }
    virtual void Triangle(Point a, Point b, Point c)
    {
        Line(a, b);
        Line(b, c);
        Line(c, a);
    }
    SpaceShip(int X, int Y):x(X), y(Y)
    {
        setcolor(WHITE);
        d[1] = Point(-1.5,4);
        d[2] = Point(-1.5,-4);
        d[3] = Point(-5.5, 0);
        d[4] = Point(-2.5, 2.5);
        d[5] = Point(-4.5, 0);
        d[6] = Point(-2.5, -2.5);
        d[7] = Point(1.5, 4);
        d[8] = Point(1.5, -4);
        d[9] = Point(5.5, 0);
        d[10] = Point(2.5, 2.5);
        d[11] = Point(4.5, 0);
        d[12] = Point(2.5, -2.5);
    }
    virtual void ve()
    {
        bar(x-0.5*t, y + 1*t, x+0.5*t, y-1*t);
        Triangle(d[1], d[2], d[3]);
        Triangle(d[4], d[5], d[6]);
        Triangle(d[7], d[8], d[9]);
        Triangle(d[10], d[11], d[12]);
    }
};
