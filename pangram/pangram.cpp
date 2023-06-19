#include "pangram.h"
#include <map>

namespace pangram
{
    bool is_pangram(std::string sentence)
    {
        std::map<char, char> chars;
        for (unsigned long i = 0; i < sentence.length(); i++)
        {
            char c = tolower(sentence[i]);
            if (std::isalpha(c))
                chars.insert_or_assign(c, c);
        }
        return chars.size() == 26;
    }
} // namespace pangram
