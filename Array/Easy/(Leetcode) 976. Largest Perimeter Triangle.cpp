// Ques Link: https://leetcode.com/problems/largest-perimeter-triangle/description/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int largestPerimeter(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        for (int i = nums.size() - 1; i >= 2; i--)
        {
            if (nums[i - 2] + nums[i - 1] > nums[i])
            {
                return (long long)nums[i] + nums[i - 1] + nums[i - 2];
            }
        }

        return 0;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {2, 1, 2};

    cout << "Largest Perimeter: " << sol.largestPerimeter(nums) << endl;

    return 0;
}