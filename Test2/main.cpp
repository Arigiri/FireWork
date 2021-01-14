#include <PhaoHoa.hpp>
int Global::basic_color = BLACK;
int Global::Height = 500;
int Global::Width = 700;
int main()
{
    initwindow(Global::Width, Global::Height, "Hanabi");
    PhaoHoa hana = PhaoHoa();
    while(hana.capnhat())
    {
        Sleep(40);
        cleardevice();
    }
    getch();
    closegraph();
}
