// Ques Link: https://leetcode.com/problems/single-number/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int x = 0;
        for (auto i : nums)
        {
            x ^= i;
        }
        return x;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {4, 1, 2, 1, 2};
    int k = s.singleNumber(nums);
    cout << k;
    return 0;
}