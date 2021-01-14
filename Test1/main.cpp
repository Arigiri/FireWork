#include <Manager.hpp>
#include <bits/stdc++.h>
#include <Land.hpp>
#include <MMSystem.h>
int Global::Height = 500, Global::Width = 700;
int Global::basic_color = BLACK;
int Global::Ground = 300;
int main()
{
    initwindow(Global::Width, Global::Height, "Hanabi");
//    PhaoHoa hana = PhaoHoa();
//    std::srand(time(NULL));
//    while(hana.capnhat())
//    {
//        Sleep(40);
//        cleardevice();
//    }
    Land land = Land();
    land.ve();

    getch();
    closegraph();

}
