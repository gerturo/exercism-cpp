#include "space_age.h"

namespace space_age
{
    space_age::space_age(long seconds)
    {
        m_seconds = seconds;
    }

    float space_age::calculate_age(float orbital_period) const
    {
        return (float)m_seconds / (float)31557600 / orbital_period;
    }

    long space_age::seconds() const
    {
        return m_seconds;
    }

    float space_age::on_earth() const
    {
        return calculate_age(1.0);
    }

    float space_age::on_mercury() const
    {
        return calculate_age(0.2408467);
    }

    float space_age::on_venus() const
    {
        return calculate_age(0.61519726);
    }

    float space_age::on_mars() const
    {
        return calculate_age(1.8808158);
    }

    float space_age::on_jupiter() const
    {
        return calculate_age(11.862615);
    }

    float space_age::on_saturn() const
    {
        return calculate_age(29.447498);
    }

    float space_age::on_uranus() const
    {
        return calculate_age(84.016846);
    }

    float space_age::on_neptune() const
    {
        return calculate_age(164.79132);
    }

} // namespace space_age
