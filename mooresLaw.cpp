#include <vector>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int feq = 0, ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (feq == 0)
                ans = nums[i];
            if (ans == nums[i])
                feq++;
            else
                feq--;
        }
        return ans;
    }
};