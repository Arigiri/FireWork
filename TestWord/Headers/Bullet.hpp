#include <GP.hpp>
class Bullet
{
    Point toado;
    Bullet(int x, int y)
    {
        toado.x = x, toado.y = y;
    }
    virtual void ve()
    {
        Cirlce(toado, 5.f);
    }
};
