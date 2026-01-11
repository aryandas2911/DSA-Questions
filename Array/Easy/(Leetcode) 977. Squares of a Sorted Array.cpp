// Ques Link: https://leetcode.com/problems/squares-of-a-sorted-array/description/4

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> sq;
        for (int i = 0; i < nums.size(); i++)
        {
            sq.push_back(nums[i] * nums[i]);
        }
        sort(sq.begin(), sq.end());
        return sq;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> result = sol.sortedSquares(nums);
    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}