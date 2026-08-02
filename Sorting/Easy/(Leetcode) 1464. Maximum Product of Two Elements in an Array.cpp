// Ques Link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return (nums[n - 1] - 1) * (nums[n - 2] - 1);
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {3, 4, 5, 2};

    cout << "Maximum Product: " << sol.maxProduct(nums) << endl;

    return 0;
}