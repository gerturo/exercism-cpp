#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <map>
#include <string>
#include <vector>

using namespace std;

namespace grade_school
{
    class school
    {
    private:
        map<int, vector<string>> m_roster;
        vector<string> get_names(int grade) const;

    public:
        void add(string name, int grade);
        vector<string> grade(int grade) const;
        map<int, vector<string>> roster() const;
    };
} // namespace grade_school

#endif // GRADE_SCHOOL_H