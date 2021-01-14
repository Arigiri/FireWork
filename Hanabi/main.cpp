#include <Manager.hpp>
#include <bits/stdc++.h>
int Global::Height = 500, Global::Width = 700;
int Global::basic_color = BLACK;
int main()
{
    initwindow(Global::Width, Global::Height, "Hanabi");
    Manager hana = Manager();
    std::srand(time(NULL));
    while(hana.Capnhat())
    {
        Sleep(40);
        cleardevice();
    }
    getch();
    closegraph();

}
