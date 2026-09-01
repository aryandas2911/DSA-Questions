// Ques Link: https://leetcode.com/problems/smallest-absent-positive-greater-than-average/description/

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution
{
public:
    int smallestAbsent(vector<int> &nums)
    {
        int n = nums.size();

        int avg = floor(accumulate(nums.begin(), nums.end(), 0) / n);
        int ans = avg + 1;

        while (ans <= 0 || find(nums.begin(), nums.end(), ans) != nums.end())
        {
            ans++;
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {3, 5};

    cout << sol.smallestAbsent(nums) << endl;

    return 0;
}