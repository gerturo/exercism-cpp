#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H

#include <utility>

using namespace std;

namespace queen_attack
{
    class chess_board
    {
    private:
        pair<int, int> m_white;
        pair<int, int> m_black;
        bool is_valid(int i);
        bool is_valid(pair<int, int> p);

    public:
        chess_board(pair<int, int> white, pair<int, int> black);
        pair<int, int> white() const;
        pair<int, int> black() const;
        bool can_attack() const;
    };
} // namespace queen_attack

#endif // QUEEN_ATTACK_H