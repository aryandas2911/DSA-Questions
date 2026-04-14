// Ques Link: https://leetcode.com/problems/minimum-distance-to-the-target-element/description/

#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int getMinDistance(vector<int> &nums, int target, int start)
    {
        int re = INT_MAX;
        int idx = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                idx = i;
                re = min(re, abs(idx - start));
            }
        }
        return re;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 5;
    int start = 3;

    cout << sol.getMinDistance(nums, target, start) << endl;

    return 0;
}