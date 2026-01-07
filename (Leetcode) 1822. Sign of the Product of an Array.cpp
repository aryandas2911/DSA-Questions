// Ques Link: https://leetcode.com/problems/sign-of-the-product-of-an-array/description/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int signFunc(int product)
    {
        if (product > 0)
            return 1;
        else if (product < 0)
            return -1;
        else
            return 0;
    }
    int arraySign(vector<int> &nums)
    {
        int product = 1;
        int c = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                return signFunc(0);
            }
            if (nums[i] < 0)
                c++;
        }
        return signFunc(c % 2 == 0 ? 1 : -1);
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {-1, -2, -3, -4, 3};
    cout << sol.arraySign(nums) << endl;

    return 0;
}