#include <Bullet.hpp>
class SpaceShip
{
public:
    SpaceShip(){}
    Point toado;
    float t = 10;
    Point d[13];
    Bullet dan;
    virtual void Triangle(Point a, Point b, Point c)
    {
        Line(a, b);
        Line(b, c);
        Line(c, a);
    }
    virtual void khoitao()
    {
        d[1] = Point(toado.x - 1.5 * t,toado.y + 4* t);
        d[2] = Point(toado.x -1.5 * t,toado.y -4* t);
        d[3] = Point(toado.x -5.5 * t, toado.y +0* t);

        d[4] = Point(toado.x -2 * t, toado.y +2.5* t);
        d[5] = Point(toado.x -4.5* t, toado.y +0* t);
        d[6] = Point(toado.x -2 * t, toado.y -2.5* t);

        d[7] = Point(toado.x  + 1.5* t, toado.y +4* t);
        d[8] = Point(toado.x + 1.5* t, toado.y -4* t);
        d[9] = Point(toado.x + 5.5* t, toado.y +0* t);

        d[10] = Point(toado.x + 2* t,toado.y + 2.5* t);
        d[11] = Point(toado.x + 4.5* t, toado.y +0* t);
        d[12] = Point(toado.x + 2* t, toado.y -2.5* t);
    }
    SpaceShip(Point toado)
    {
        this -> toado = toado;
        khoitao();
        dan = Bullet(Point(toado.x, -6 * t + toado.y), 3);
    }
    virtual void ve()
    {
        float x = toado.x, y = toado.y;
        bar(x-0.5*t, y + 1*t, x+0.5*t, y-1*t);
        Triangle(d[1], d[2], d[3]);
        Triangle(d[4], d[5], d[6]);
        Triangle(d[7], d[8], d[9]);
        Triangle(d[10], d[11], d[12]);
    }
    virtual void xoa()
    {
        setfillstyle(1, Global::basic_color);
        setcolor(BLACK);
        ve();
    }
    virtual void to()
    {
        setfillstyle(1, WHITE);
        setcolor(WHITE);
        ve();
    }
    virtual bool ban()
    {
        return dan.capnhat();
    }
    virtual void capnhat(Point toadomoi)
    {
        xoa();
        this -> toado = toadomoi;
        khoitao();
        to();
        if(!ban())
        {
            dan.xoa();
            dan = Bullet(Point(toado.x, -6 * t + toado.y), 3);
        }
    }
};

