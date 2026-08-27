// Ques Link: https://leetcode.com/problems/build-array-from-permutation/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {0, 2, 1, 5, 3, 4};

    vector<int> ans = sol.buildArray(nums);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}