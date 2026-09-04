// Ques Link: https://leetcode.com/problems/smallest-stable-index-i/description/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    int firstStableIndex(vector<int> &nums, int k)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int maxi = INT_MIN;
            int mini = INT_MAX;

            for (int j = 0; j <= i; j++)
            {
                if (nums[j] > maxi)
                {
                    maxi = nums[j];
                }
            }

            for (int k = i; k < nums.size(); k++)
            {
                if (nums[k] < mini)
                {
                    mini = nums[k];
                }
            }

            if (maxi - mini <= k)
            {
                return i;
            }
        }

        return -1;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {5, 0, 1, 4};
    int k = 3;

    cout << sol.firstStableIndex(nums, k) << endl;

    return 0;
}