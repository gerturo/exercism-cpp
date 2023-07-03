#include "queen_attack.h"

#include <cmath>
#include <stdexcept>

namespace queen_attack
{
    bool chess_board::is_valid(int i)
    {
        return ((i >= 0) && (i <= 7));
    }

    bool chess_board::is_valid(pair<int, int> p)
    {
        return (is_valid(p.first) && is_valid(p.second));
    }

    chess_board::chess_board(pair<int, int> white, pair<int, int> black)
    {
        if (!is_valid(white) || !is_valid(black) || white == black)
            throw domain_error("");

        m_white = white;
        m_black = black;
    }

    pair<int, int> chess_board::white() const
    {
        return m_white;
    }

    pair<int, int> chess_board::black() const
    {
        return m_black;
    }

    bool chess_board::can_attack() const
    {
        if (m_white.first == m_black.first)
            return true;

        if (m_white.second == m_black.second)
            return true;

        if (abs(m_black.first - m_white.first) == abs(m_black.second - m_white.second))
            return true;

        return false;
    }
} // namespace queen_attack
