#include <Hat.hpp>
#include <vector>
#include <math.h>
class PhaoHoa
{
public:
    std::vector<Hat> listHat;
    Hat Hatban;
    int n;
    PhaoHoa()
    {
        Hatban = Hat(Point(randint(100, Global::Width - 100), Global::Height),Point(0, -1*randint(10, 20)), randint(10, 20), randint(1,16));
        Hatban.mau = randint(1, 16);
        n = randint(50,100);
    }
    void khoitaoban()
    {
        listHat.clear();
        int mau = randint(1, 16);
        for(int i = 1; i <= n; i++)
        {
            Hat tmp;
            tmp = Hatban;
            tmp.mau = mau;
            tmp.tocdo = Point(randint(-5, 5), randint(-5, 5));
            tmp.living_time = randint(20, 35);
            listHat.push_back(tmp);
        }
    }
    bool ban()
    {
        for(int i = 0; i < listHat.size(); i++)
        {
            if(!listHat[i].capnhat())listHat[i].draw(Global::basic_color), listHat.erase(listHat.begin() + i);
        }
        return listHat.size();
    }
    bool capnhat()
    {
       if(Hatban.capnhat())return 1;
       else if(listHat.empty())khoitaoban();
       return ban();
    }
};
