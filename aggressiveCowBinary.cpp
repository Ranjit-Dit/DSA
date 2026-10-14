// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int isValid(vector<int> arr, int len, int k, int mid)
    {
        int cows = 1;
        int lastStallPos = arr[0];
        for (int i = 1; i < len; i++)
        {
            if (arr[i] - lastStallPos >= mid)
            {
                cows++;
                lastStallPos = arr[i];
            }
            if (k == cows)
                return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &arr, int k)
    {
        sort(arr.begin(), arr.end());

        int len = arr.size();
        int start = 0;
        int end = arr[len - 1] - arr[0];
        int ans = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            cout << mid << endl;
            if (isValid(arr, len, k, mid))
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {1, 2, 4, 8, 9};
    int noOfCows = 3;
    Solution problem;
    cout << problem.aggressiveCows(arr, noOfCows);

    return 0;
}