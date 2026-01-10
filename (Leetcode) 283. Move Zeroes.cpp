// Ques Link: https://leetcode.com/problems/move-zeroes/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int j = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                if (i != j)
                {
                    nums[j] = nums[i];
                    nums[i] = 0;
                }
                j++;
            }
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums = {0};
    s.moveZeroes(nums);
    return 0;
}