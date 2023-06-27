#include "nucleotide_count.h"

#include <stdexcept>

namespace nucleotide_count
{
    map<char, int> count(string strand)
    {
        int countA = 0;
        int countC = 0;
        int countG = 0;
        int countT = 0;

        for (unsigned long i = 0; i < strand.length(); i++)
        {
            char nucleotide = strand[i];
            switch (nucleotide)
            {
            case 'A':
                countA++;
                break;
            case 'C':
                countC++;
                break;
            case 'G':
                countG++;
                break;
            case 'T':
                countT++;
                break;
            default:
                throw std::invalid_argument("");
            }
        }
        return {{'A', countA}, {'C', countC}, {'G', countG}, {'T', countT}};
    }
} // namespace nucleotide_count
