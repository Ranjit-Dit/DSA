class Solution
{
public:
    bool isPalindrome(int x)
    {
        int copy = x;
        long long sum = 0;
        while (copy > 0)
        {
            sum = sum * 10 + copy % 10;
            copy /= 10;
        }
        return sum == x;
    }
};