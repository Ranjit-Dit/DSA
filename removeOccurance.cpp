#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        while (s.length() > 0 && s.find(part) < s.length())
        {

            int pos = s.find(part);
            s.erase(pos, part.length());
        }

        return s;
    }
};

/// step  1  -->

int main()
{
    Solution problem;
    string s = "axxxxyyyyb", part = "xy";
    cout << problem.removeOccurrences(s, part);
    return 0;
}