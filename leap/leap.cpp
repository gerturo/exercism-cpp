#include "leap.h"

namespace leap
{
    bool is_leap_year(int year)
    {
        bool leap_year = false;
        if (year % 4 == 0)
            leap_year = true;
        if (year % 100 == 0)
            leap_year = false;
        if (year % 400 == 0)
            leap_year = true;

        return leap_year;
    }
} // namespace leap
