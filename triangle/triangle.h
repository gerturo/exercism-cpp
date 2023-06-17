#if !defined(TRIANGLE_H)
#define TRIANGLE_H

namespace triangle
{
    enum flavor
    {
        equilateral,
        isosceles,
        scalene
    };
    flavor kind(float side1, float side2, float side3);
} // namespace triangle

#endif // TRIANGLE_H