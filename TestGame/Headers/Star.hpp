
class Star
{
public:
    Point toado;
    Point tocdoroi;
    float t = 5;
    Star(Point toado)
    {
        this -> toado = toado;
        tocdoroi = Point(0, 3.5);
    }
    virtual void ve()
    {
        line(toado.x - 0.5 * t, toado.y, toado.x + 0.5 * t, toado.y);
        line(toado.x, toado.y - 0.5 * t, toado.x, toado.y + 0.5 * t);
        line(toado.x - 0.5 * t, toado.y + 0.5 * t, toado.x + 0.5 * t, toado.y - 0.5 * t);
        line(toado.x + 0.5 * t, toado.y + 0.5 * t, toado.x - 0.5 * t, toado.y - 0.5 * t);
    }
    virtual void roi()
    {
        toado.x += tocdoroi.x;
        toado.y += tocdoroi.y;
    }
    virtual void xoa()
    {
        setcolor(Global::basic_color);
        ve();
    }
    virtual void to()
    {
        setcolor(WHITE);
        ve();
    }
    virtual bool capnhat()
    {
        xoa();
        roi();
        to();
        if(toado.y > Global::height - 0.5 * t)return 0;
        else return 1;
    }
};
