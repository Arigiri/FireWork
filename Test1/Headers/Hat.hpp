#include <Point.hpp>
#include <Random.hpp>
#include <Global.hpp>
#include <graphics.h>
class Hat
{
public:
    Point toado, tocdo;
    int living_time;
    int mau;
    Hat()
    {

    }
    Hat(Point toado, Point tocdo, int living_time, int mau)
    {
        this -> toado = toado;
        this -> tocdo = tocdo;
        this -> living_time = living_time;
    }
    virtual void draw(int mau)
    {
        setfillstyle(1,mau);
        bar(toado.x - 1, toado.y - 1, toado.x + 1, toado.y + 1);
    }
    virtual bool capnhat()
    {
        if(living_time <= 0 || toado.y <= 50) return 0;
        toado.x += tocdo.x;
        toado.y += tocdo.y;
        living_time--;
        draw(mau);
        return living_time > 0;
    }
};
