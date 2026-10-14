// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int findPages(vector<int> &arr, int k)
    {
        // code here
        int possibilitiy[10];
        int len = arr.size();
        int sum = 0;
        for (int i = 0; i < len; i++)
        {
            sum += arr[i];
        }
        cout << "the total pages is " << sum << endl;

        int perfectDivision = sum / 2;
        int current;
        int bestDiff = INT16_MAX;
        int bestIndex;

        for (int i = 0; i < len; i++)
        {
            current += arr[i];
            int diff = perfectDivision - current;
            if (diff > 0 && diff < bestDiff)
            {

                bestDiff = diff;
                bestIndex = i;
            }
        }
        cout << bestIndex;

        return 0;
    }
};

int main()
{
    // Write C++ code here
    Solution problem;
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;
    problem.findPages(arr, k);
    return 0;
}