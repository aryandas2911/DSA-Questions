// Ques Link: https://leetcode.com/problems/concatenation-of-array/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(2 * n);
        copy(nums.begin(), nums.end(), ans.begin());
        copy(nums.begin(), nums.end(), ans.begin() + n);
        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {1, 2, 3};
    vector<int> result = sol.getConcatenation(nums);

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}
