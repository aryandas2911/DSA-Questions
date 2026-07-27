// Ques Link: https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/description/

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % k == 0)
        {
            return 0;
        }
        else if (sum < k)
        {
            return sum;
        }
        else
        {
            int diff = sum % k;
            return diff;
        }
        return 0;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {3, 9, 7};
    int k = 5;

    cout << "Minimum Operations: " << sol.minOperations(nums, k) << endl;

    return 0;
}