#include "collatz_conjecture.h"

#include <stdexcept>

using namespace std;

namespace collatz_conjecture
{
    int steps(int n)
    {
        if (n <= 0)
            throw domain_error("");
        else if (n == 1)
            return 0;
        else if (n % 2 == 0)
            return 1 + steps(n / 2);
        else
            return 1 + steps(n * 3 + 1);
    }
} // namespace collatz_conjecture
