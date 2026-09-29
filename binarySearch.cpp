class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int length = nums.size();
        int left = 0, right = length - 1;

        while (left <= right)
        {
            int pos = left + (right - left) / 2;

            if (nums[pos] == target)
                return pos;
            if (nums[pos] > target)
            {
                right = pos - 1;
            }
            else
            {
                left = pos + 1;
            }
        }
        return -1;
    }
};