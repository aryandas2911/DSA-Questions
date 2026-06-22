// Ques Link: https://leetcode.com/problems/maximum-product-subarray/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size();
        int product = INT_MIN;
        int pre = 1;
        int suff = 1;

        for (int i = 0; i < n; i++)
        {
            if (pre == 0)
                pre = 1;
            if (suff == 0)
                suff = 1;

            pre *= nums[i];
            suff *= nums[n - 1 - i];

            product = max(product, max(pre, suff));
        }
        return product;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {2, -5, -2, -4, 3};

    int result = obj.maxProduct(nums);

    cout << "Maximum Product Subarray: " << result << endl;

    return 0;
}