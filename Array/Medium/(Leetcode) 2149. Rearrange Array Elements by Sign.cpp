// Ques Link: https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n, 0);
        int pos = 0, neg = 1;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                ans[pos] = nums[i];
                pos += 2;
            }
            else
            {
                ans[neg] = nums[i];
                neg += 2;
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> result = sol.rearrangeArray(nums);

    cout << "Rearranged array: ";
    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}