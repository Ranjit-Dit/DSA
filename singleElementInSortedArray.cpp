#include <vector>
using namespace std;
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right)
        {
            int mid = left + (right - left) / 2;

            // An elegant trick: XORing an even number with 1 adds 1 to it.
            // XORing an odd number with 1 subtracts 1 from it.
            // This perfectly checks if the "pair" logic is intact.
            if (nums[mid] == nums[mid ^ 1])
            {
                // The pair is matching correctly, meaning the single element
                // hasn't disrupted the pattern yet. Search the right half.
                left = mid + 1;
            }
            else
            {
                // The pattern is broken, meaning the single element is at 'mid'
                // or somewhere in the left half.
                right = mid;
            }
        }

        // When left == right, we have isolated the single element
        return nums[left];
    }
};