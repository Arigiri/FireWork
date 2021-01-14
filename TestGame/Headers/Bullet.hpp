
class Bullet
{
public:
    Point toado;
    Point tocdo ;
    float radius = 3;
    float t;
    bool Living;
    Bullet(){};
    Bullet(Point Toado, float t)
    {
        toado = Toado;
        tocdo = Point(0, -15 * t);
        radius *= t;
    }
    virtual void ve()
    {
        Cirlce(toado, radius);
    }
    virtual void xoa()
    {
        setcolor(BLACK);
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
        toado.x += tocdo.x;
        toado.y += tocdo.y;
        to();
        return toado.y > 0;
    }
};
