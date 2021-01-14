#include <PhaoHoa.hpp>


class Manager
{
public:
    std::vector<PhaoHoa> ListPhaoHoa;
    int Update_Time;
    Manager()
    {
        PhaoHoa tmp;
        tmp = PhaoHoa();
        ListPhaoHoa.push_back(tmp);
        Update_Time = randint(20, 30);
    }
    virtual bool Capnhat()
    {
        for(int i = 0; i < ListPhaoHoa.size(); i++)
        {
            if(!ListPhaoHoa[i].capnhat())ListPhaoHoa.erase(ListPhaoHoa.begin() + i);
            if(Update_Time)Update_Time--;
            else if(ListPhaoHoa.size() <= 5)
            {
                PhaoHoa tmp = PhaoHoa();
                ListPhaoHoa.push_back(tmp);
                Update_Time = randint(20, 30);
            }

        }
        return !ListPhaoHoa.empty();
    }
};
