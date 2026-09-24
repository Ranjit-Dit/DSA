class Solution
{
public:
    double myPow(double x, int n)
    {
        double answer = 1;
        if (n == 0)
            return 1.0;
        if (x == 0)
            return 0.0;
        if (x == 1)
            return 1;
        if (x == -1 && n % 2 == 0)
            return 0.0;
        if (x == -1 && n % 2 != 0)
            return -1.0;
        if (n < 0)
        {
            n = -n;
            x = 1 / x;
        }
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                answer *= x;
            }
            x *= x;
            n /= 2;
        }
        return answer;
    }
};