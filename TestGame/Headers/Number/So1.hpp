
class So1
{
public:
    Point toado;
    int t;
    So1(Point toado, int t)
    {
        this -> toado = toado;
        this -> t = t;
    }
    virtual void ve()
    {
        line(toado.x + 1 * t, toado.y + 1 * t, toado.x + 1 * t, toado.y - 1 * t);
    }

};
