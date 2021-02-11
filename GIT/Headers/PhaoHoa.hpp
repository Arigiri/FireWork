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
        n = randint(60,150);
        Hatban.dilen = true;
    }
    virtual void khoitaoban()
    {
        listHat.clear();
        int mau = randint(1, 15);
        for(int i = 1; i <= n; i++)
        {
            Hat tmp;
            tmp = Hatban;
            tmp.mau = mau;
            tmp.tocdo = Point(randint(-5, 5), randint(-5, 5));
            tmp.living_time = randint(5, 25);
            listHat.push_back(tmp);
        }
    }
    virtual bool ban()
    {
        for(int i = 0; i < listHat.size(); i++)
        {
            if(!listHat[i].capnhat()) listHat.erase(listHat.begin() + i);
        }
        return listHat.size();
    }
    virtual bool capnhat()
    {
       if(Hatban.capnhat())return 1;
       else if(listHat.empty())Hatban.dilen = 0, khoitaoban();
       return ban();
    }
};
