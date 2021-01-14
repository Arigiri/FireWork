#include<Hat.hpp>
#include <Global.hpp>
#include <vector>

class PhaoHoa
{
public:
    std::vector<Hat> listHat;
    Hat Hatban;
    PhaoHoa()
    {
        Hatban = Hat(Point(randint(100, Global::Width - 100), Global::Height), randint(10, 20), randint(40, 60), randint(1, 16));
        Hatban.mau = randint(1, 16);
    }
    virtual void SinhPhao()
    {
        listHat.clear();
        int n = randint(40, 60);
        for(int i = 1; i <= n; i++)
        {
            Hat tmp = Hatban;
            tmp.tocdo = randint(-5, 5);
            tmp.living_time = randint(10, 50);
            tmp.mau = randint(1, 16);
            listHat.push_back(tmp);
        }
    }
    bool no()
    {
        for(int i = 0; i < listHat.size(); i++)
        {
            if(!listHat[i].drop())
            {
                listHat.erase(listHat.begin() + i);
            }
        }
        return !listHat.empty();
    }
    bool capnhat()
    {
        if(Hatban.goup())return 1;
        if(listHat.empty())SinhPhao();
        return no();
    }
};
