// Ques Link: https://leetcode.com/problems/smallest-stable-index-ii/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstStableIndex(vector<int> &nums, int k)
    {

        int n = nums.size();

        vector<int> mini(n);

        mini[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            mini[i] = min(nums[i], mini[i + 1]);
        }

        int maxi = INT_MIN;

        for (int i = 0; i < n; i++)
        {

            maxi = max(maxi, nums[i]);

            if (maxi - mini[i] <= k)
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