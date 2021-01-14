#include <cstdlib>


int randint(int lo, int hi)
{
    return rand() % (hi - lo + 1) + lo;
}
