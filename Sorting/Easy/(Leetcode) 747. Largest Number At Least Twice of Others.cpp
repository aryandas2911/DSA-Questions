// Ques Link: https://leetcode.com/problems/largest-number-at-least-twice-of-others/description/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int max = 0;
        int max_ind = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (nums[i] > max)
            {
                max = nums[i];
                max_ind = i;
            }
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] * 2 > nums[n - 1])
            {
                return -1;
            }
        }

        return max_ind;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {3, 6, 1, 0};

    cout << sol.dominantIndex(nums) << endl;

    return 0;
}