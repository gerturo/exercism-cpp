#include "grade_school.h"
#include <algorithm>

namespace grade_school
{
    // Private
    vector<string> school::get_names(int grade) const
    {
        vector<string> names;
        map<int, vector<string>>::const_iterator iterator = m_roster.find(grade);
        if (iterator != m_roster.end())
            names = iterator->second;
        return names;
    }

    // Public
    map<int, vector<string>> school::roster() const
    {
        return m_roster;
    }
    void school::add(string name, int grade)
    {
        vector<string> names = get_names(grade);
        names.push_back(name);
        sort(names.begin(), names.end());
        m_roster.insert_or_assign(grade, names);
    }
    vector<string> school::grade(int grade) const
    {
        return get_names(grade);
    }
} // namespace grade_school
