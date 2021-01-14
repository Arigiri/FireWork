#include <Point.hpp>
#include <graphics.h>


class Hat
{
public:
    Point toado;
    int tocdo;
    int living_time;
    int mau;
    Hat()
    {

    }
    Hat(Point Toado, int Tocdo, int living_time, int mau)
    {
        toado = Toado;
        tocdo = Tocdo;
        this -> living_time = living_time;
        this -> mau = mau;
    }
    virtual void ve()
    {
        setfillstyle(1, mau);
        bar(toado.x - 1, toado.y - 1, toado.x + 1, toado.y + 1);
    }
    bool goup()
    {
        if(living_time <= 0)return 0;
        toado.y-=1.5f;
        living_time--;
        ve();
        return 1;
    }
    bool drop()
    {
        if(living_time <= 0)return 0;
        toado.x += tocdo;
        toado.y = toado.quydao.Get(toado.x);
        ve();
        return 1;
    }
};
