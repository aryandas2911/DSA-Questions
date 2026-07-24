// Ques Link: https://leetcode.com/problems/max-consecutive-ones/description/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int ans = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                sum++;
                ans = max(ans, sum);
            }
            else
            {
                sum = 0;
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {1, 1, 0, 1, 1, 1};

    cout << "Maximum consecutive ones: " << sol.findMaxConsecutiveOnes(nums) << endl;

    return 0;
}