#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        vector<int> expected;
        for (int num : nums)
        {
            if (num != val)
                expected.push_back(num);
        }
        cout << expected << endl;
        return val;
    }
};

int main()
{
    vector<int> nums = {3, 2, 2, 3};
    int valRemove = 3;
    Solution solution;
    cout << solution.removeElement(nums, valRemove);
    return 0;
}