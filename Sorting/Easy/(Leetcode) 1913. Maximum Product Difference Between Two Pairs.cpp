// Ques Link: https://leetcode.com/problems/maximum-product-difference-between-two-pairs/description/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxProductDifference(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return (nums[n - 1] * nums[n - 2]) - (nums[0] * nums[1]);
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {5, 6, 2, 7, 4};

    int result = sol.maxProductDifference(nums);

    cout << "Maximum Product Difference: " << result << endl;

    return 0;
}