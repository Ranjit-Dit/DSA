class Solution
{
public:
    double myPow(double x, int n)
    {
        double answer = 1;
        long long N = n;
        if (N == 0)
            return 1.0;
        if (x == 0)
            return 0.0;
        if (x == 1)
            return 1;
        if (x == -1 && N % 2 == 0)
            return 1.0;
        if (x == -1 && N % 2 != 0)
            return -1.0;
        if (N < 0)
        {
            N = -N;
            x = 1 / x;
        }
        while (N > 0)
        {
            if (N % 2 == 1)
            {
                answer *= x;
            }
            x *= x;
            N /= 2;
        }
        return answer;
    }
};