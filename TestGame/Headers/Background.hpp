#include <Star.hpp>
#include <Random.hpp>
#include <vector>
#include <ScoreBoard.hpp>
class BackGround
{
public:
    std::vector<Star> listStar;
    ScoreBoard diem;
    BackGround()
    {
        for(int i = 10; i <= Global::height - 10; i++)
            for(int j = 10; j <= Global::width - 10; j++)
            {
                int ve = randint(0, 32520);
                if(ve == 0)
                {
                    Star tmp = Star(Point(j, i));
                    listStar.push_back(tmp);
                }
            }
        diem = ScoreBoard();
    }
    virtual void ve()
    {
        for(auto i = listStar.begin(); i != listStar.end(); i++)
        {
            if((*i).capnhat()==false)
            {
                (*i).xoa();
                float x = randint(10.f, 1.f*Global::width - 10.f);
                float y = 10.f;
                (*i).toado = Point(x, y);
            }
        }
        diem.ve();

    }
};
