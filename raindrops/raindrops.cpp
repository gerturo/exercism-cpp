#include "raindrops.h"

namespace raindrops
{
    std::string convert(int number_of_raindrops)
    {
        std::string raindrop_sounds = "";

        if (number_of_raindrops % 3 == 0)
            raindrop_sounds = "Pling";
        if (number_of_raindrops % 5 == 0)
            raindrop_sounds += "Plang";
        if (number_of_raindrops % 7 == 0)
            raindrop_sounds += "Plong";
        if (raindrop_sounds == "")
            raindrop_sounds = std::to_string(number_of_raindrops);

        return raindrop_sounds;
    }
} // namespace raindrops
