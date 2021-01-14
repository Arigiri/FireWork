#include <graphics.h>

class A
{
public:
    float x, y;
    float tile = 10;
    A(int X, int Y):x(X), y(Y)
    {
    }
    virtual void ve()
    {
        setcolor(WHITE);
        line(x+1*tile, y-4*tile, x-1*tile, y-4*tile);
        line(x + 0.5*tile, y - 2 * tile, x - 0.5 * tile, y - 2*tile);
        line(x+1.5*tile, y + 1*tile, x - 1.5*tile, y + 1*tile);
        line(x+2*tile, y+2.5*tile, x-2*tile, y+2.5*tile);
        line(x+5*tile, y+6*tile,x+3*tile, y+6*tile);
        line(x-3*tile, y+6*tile, x-5*tile, y+6*tile);
        line(x+1*tile, y-4*tile, x+5*tile, y+6*tile);
        line(x-1*tile, y-4*tile, x-5*tile, y+6*tile);
        line(x + 0.5*tile, y - 2*tile, x+3*tile, y+6*tile);
        line(x - 0.5*tile, y - 2*tile, x-3*tile, y+6*tile);

    }
};
