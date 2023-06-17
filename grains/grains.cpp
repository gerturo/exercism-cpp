#include "grains.h"
#include <math.h>

namespace grains
{
    unsigned long long square(int position)
    {
        return pow(2, position - 1);
    }

    unsigned long long total(int position)
    {
        return (position > 1) ? square(position) + total(position - 1) : 1;
    }
} // namespace grains
