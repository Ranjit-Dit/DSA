#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void dutch(vector<int> &nums)
    {
        int len = nums.size();
        int low = 0;
        int mid = 0;
        int high = len - 1;
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }
    void sort(vector<int> &num)
    {
        int countZero = 0;
        int countOnce = 0;
        int countTwo = 0;
        int len = num.size();
        for (int i = 0; i < len; i++)
        {
            if (num[i] == 0)
                countZero++;
            else if (num[i] == 1)
                countOnce++;
            else
                countTwo++;
        }
        num.clear();
        for (int i = 0; i < len; i++)
        {
            if (countZero != 0)
            {
                num.push_back(0);
                countZero--;
            }
            else if (countOnce != 0)
            {
                num.push_back(1);
                countOnce--;
            }
            else
            {
                num.push_back(2);
                countTwo--;
            }
        }
    }
};

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    Solution problem;
    problem.dutch(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << " " << nums[i];
    }

    return 0;
}