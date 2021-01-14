#include <AllHeaderInNeed.hpp>
#include <GameConsole.hpp>
#include <So1.hpp>
int Global::height = 1000, Global::width = 700, Global::basic_color = BLACK;

int main()
{
    initwindow(Global::width, Global::height, "TestSpaceShip");
//    GameConsole console = GameConsole();
//    while(1)console.Work();
    while(1)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            So1 no1 = So1(Point(mousex(), mousey()), 10);
            no1.ve();
            clearmouseclick(WM_LBUTTONDOWN);
        }
    }
    getch();
    closegraph();
}
