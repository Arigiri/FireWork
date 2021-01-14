
class ScoreBoard
{
public:
//    ScoreBoard(){}
    int diem;
    Point d[12];
    virtual void khoitao()
    {
        d[0] = Point(0,0);
        d[1] = Point(250, 0);
        d[2] = Point(250, 50);
        d[3] = Point(150, 80);
        d[4] = Point(0, 80);
        d[5] = Point(0,0);
        d[6] = Point(10, 10);
        d[7] = Point(240, 10);
        d[8] = Point(240, 40);
        d[9] = Point(140, 70);
        d[10] = Point(10, 70);
        d[11] = Point(10, 10);
    }
    ScoreBoard()
    {
        khoitao();
        diem = 0;
    }
    virtual void ve()
    {
        for(int i = 0; i < 5; i++)Line(d[i], d[i + 1]);
        for(int i = 6; i < 11; i++)Line(d[i], d[i + 1]);
    }
};
