#include <iostream>
#include <vector>
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 1);
        int product = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (j != i)
                    product *= nums[j];
            }
            ans[i] = product;
            product = 1;
        }
        return ans;
    }
};

#include <vector>

class Solution
{
public:
    std::vector<int> productExceptSelf(std::vector<int> &nums)
    {
        int length = nums.size();
        std::vector<int> ans(length, 1);

        // Pass 1: Calculate prefix products (product of all elements to the left of i)
        for (int i = 1; i < length; i++)
        {
            ans[i] = ans[i - 1] * nums[i - 1];
        }

        // Pass 2: Accumulate suffix products (product of all elements to the right of i)
        int suffix = 1;
        for (int i = length - 1; i >= 0; i--)
        {
            ans[i] *= suffix;
            suffix *= nums[i]; // Update suffix product for the next element to the left
        }

        return ans;
    }
};
