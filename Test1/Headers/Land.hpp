class Land
{
public:
    int ground;
    Land()
    {
        ground = Global::Ground;
    }
    virtual void ve()
    {
        setfillstyle(1, GREEN);
        bar(0, ground, Global::Width, Global::Height);
    }
};
