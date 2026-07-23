// Ques Link: https://leetcode.com/problems/maximum-product-of-three-numbers/description

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = max(nums[n - 1] * nums[n - 2] * nums[n - 3],
                      nums[0] * nums[1] * nums[n - 1]);
        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {-10, -10, 5, 2};

    cout << "Maximum Product: " << sol.maximumProduct(nums) << endl;

    return 0;
}