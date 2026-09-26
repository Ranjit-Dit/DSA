// Containter with the most height

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        long maxArea = 0;
        int i = 0;
        int j = height.size() - 1;
        int width;
        int smallWall;
        while (i < j)
        {
            width = j - i;
            smallWall = min(height[i], height[j]);
            long area = static_cast<long>(smallWall) * width;
            if (area > maxArea)
            {
                maxArea = area;
            }
            (height[i] < height[j]) ? i++ : j--;
        }
        return maxArea;
    }
};

int main()
{
    vector<int> height = {1, 2, 3, 4, 5};
    Solution answer = Solution();
    cout << answer.maxArea(height);

    return 0;
}