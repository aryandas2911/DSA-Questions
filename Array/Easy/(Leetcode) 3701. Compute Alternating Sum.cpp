// Ques Link: https://leetcode.com/problems/compute-alternating-sum/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int alternatingSum(vector<int> &nums)
    {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                ans += nums[i];
            }
            else
            {
                ans -= nums[i];
            }
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {1, 2, 3, 4};

    cout << sol.alternatingSum(nums) << endl;

    return 0;
}