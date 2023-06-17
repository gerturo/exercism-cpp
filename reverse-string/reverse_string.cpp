#include "reverse_string.h"
#include <algorithm>

namespace reverse_string
{
    std::string reverse_string(std::string text)
    {
        std::string text2 = text; // Create copy string with same value as original one

        std::reverse(text2.begin(), text2.end()); // Reverse copied string in place

        return text2;
    }
} // namespace reverse_string
