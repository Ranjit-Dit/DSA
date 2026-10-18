#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalidrome(string s)
    {
        int st = 0;
        int end = s.length() - 1;
        while (st < end)
        {
            while (st < end && !isalnum(s[st]))
                st++;

            while (st < end && !isalnum(s[end]))
                end--;

            if (tolower(s[st]) != tolower(s[end]))
                return false;
            st++;
            end--;
        }
        return true;
    }
};

int main()
{
    Solution problem;
    string input = "A man, a plan, a canal: Panama";
    if (problem.isPalidrome(input))
        cout << " this string is palidrome";
    else
        cout << "this is not palindrome";
}