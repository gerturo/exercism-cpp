#include "hamming.h"

#include <stdexcept>

namespace hamming
{
    int compute(string strand1, string strand2)
    {
        int hamming = 0;

        if (strand1.length() != strand2.length())
            throw std::domain_error("");

        for (unsigned long i = 0; i < strand1.length(); i++)
        {
            if (strand1[i] != strand2[i])
                hamming++;
        }

        return hamming;
    }
} // namespace hamming
