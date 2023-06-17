#include "triangle.h"
#include <map>
#include <stdexcept>

namespace triangle
{
    flavor kind(float side1, float side2, float side3)
    {
        // Triangle with no sides (0) or negative sides is illegal
        if (side1 <= 0.0 || side2 <= 0.0 || side3 <= 0.0)
            throw std::domain_error("");

        // Triangle violating triangle inequality is illegal
        if ((side1 + side2 < side3) || (side1 + side3 < side2) || (side2 + side3 < side1))
            throw std::domain_error("");

        // Determine flavor of legal triangle
        std::map<float, float> sides;
        sides.insert_or_assign(side1, side1);
        sides.insert_or_assign(side2, side2);
        sides.insert_or_assign(side3, side3);
        switch (sides.size())
        {
        case 1:
            return flavor::equilateral;
        case 2:
            return flavor::isosceles;
        default:
            return flavor::scalene;
        }
    }
} // namespace triangle
