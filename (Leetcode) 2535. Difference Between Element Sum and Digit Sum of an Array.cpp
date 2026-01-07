// Ques Link: https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int x = 0, y = 0;
        for (auto i : nums)
        {
            x += i;
        }
        for (auto i : nums)
        {
            while (i > 0)
            {
                y += i % 10;
                i = i / 10;
            }
        }
        return abs(x - y);
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {1, 15, 6, 3};
    cout << sol.differenceOfSum(nums) << endl;

    return 0;
}