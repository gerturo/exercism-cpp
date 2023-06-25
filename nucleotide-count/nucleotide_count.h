#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <map>
#include <stdexcept>
#include <string>

using namespace std;

namespace nucleotide_count
{
    map<char, int> count(string strand);
} // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H