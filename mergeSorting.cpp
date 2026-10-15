#include <iostream>
#include <vector>
using namespace std;

class Solution
{

public:
    void mergeSort(vector<int> &nums, vector<int> &insertingValue)
    {
        int len1 = nums.size() - 1;
        int len2 = insertingValue.size() - 1;
        int counter = len1 - len2;
        while (counter != 0)
        {
            if (nums[counter] <= insertingValue[len2])
            {
                swap(nums[len1], insertingValue[len2]);
                len1--;
                len2--;
            }
            // if (nums[counter] >= nums[len2])
            else
            {
                swap(nums[len1], nums[counter]);
                len1--;
                counter--;
            }
            for (int i = 0; i < nums.size(); i++)
            {
                cout << " " << nums[i];
            }
            cout << endl;
        }
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 0, 0, 0};
    vector<int> insert = {2, 5, 6};

    Solution problem;
    problem.mergeSort(nums, insert);

    return 0;
}