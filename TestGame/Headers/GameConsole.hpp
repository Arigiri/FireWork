#include<SpaceShip.hpp>
#include <Background.hpp>

class GameConsole
{
public:
    BackGround background;
    SpaceShip tau;
    GameConsole()
    {
        background = BackGround();
        tau = SpaceShip(Point(mousex(), mousey()));
    }
    virtual void Work()
    {
        while(1)
        {
            background.ve();
            tau.capnhat(Point(mousex(), mousey()));
            Sleep(40);
    //        cleardevice();
        }
    }
};
