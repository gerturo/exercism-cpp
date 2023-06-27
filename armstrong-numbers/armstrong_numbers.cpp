#include "armstrong_numbers.h"

#include <cmath>
#include <string>

using namespace std;

namespace armstrong_numbers
{
    bool is_armstrong_number(int number)
    {
        string digits = to_string(number);
        int power = digits.size();
        int total = 0;

        for (unsigned long i = 0; i < digits.size(); i++)
        {
            total += pow(digits[i] - '0', power);
        }

        return number == total;
    }
} // namespace armstrong_numbers
