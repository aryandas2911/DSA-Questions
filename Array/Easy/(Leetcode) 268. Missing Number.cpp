// Ques Link: https://leetcode.com/problems/missing-number/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int orig_sum = n * (n + 1) / 2;
        int sum = 0;
        for (int x : nums)
        {
            sum += x;
        }
        return orig_sum - sum;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {3, 0, 1};
    cout << sol.missingNumber(nums) << endl;

    return 0;
}
