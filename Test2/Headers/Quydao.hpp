struct Parabol
{
    int a, b, c;
    Parabol(){

    }
    Parabol(int A, int B)
    {
        a = A, b = B;
    }
    int Get(int x)
    {
        return  x + b;
    }
};
