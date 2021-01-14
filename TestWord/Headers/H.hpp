#include <graphics.h>

class H
{
public:
    float x, y;
    int tile = 5;
    H(int X, int Y):x(X), y(Y)
    {
    }
    virtual void ve()
    {
        bar(x - 3*tile, y + 5*tile, x - 1*tile, y - 5*tile);
        bar(x + 1*tile, y + 5*tile, x + 3*tile, y - 5*tile);
        bar(x - 1*tile, y + 1*tile, x + 1*tile, y - 1*tile);
    }
};
