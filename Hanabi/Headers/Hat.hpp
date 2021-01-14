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
    bool dilen = true;
    Hat()
    {

    }
    Hat(Point toado, Point tocdo, int living_time, int mau)
    {
        this -> toado = toado;
        this -> tocdo = tocdo;
        this -> living_time = living_time;
    }
    virtual void draw_go_up()
    {
        setfillstyle(1, mau);
        pieslice(toado.x , toado.y, 0, 0, 3);
    }
    virtual void draw()
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
        if(!dilen)draw();
        else draw_go_up();
        return living_time > 0;
    }
};
