// Ques Link: https://leetcode.com/problems/type-of-triangle/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string triangleType(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        if (nums[0] + nums[1] <= nums[2])
            return "none";
        if (nums[0] == nums[1] && nums[1] == nums[2])
            return "equilateral";
        else if (nums[0] == nums[1] || nums[1] == nums[2])
            return "isosceles";
        else
            return "scalene";
    }
};

int main()
{
    Solution sol;
    vector<int> nums(3);
    cin >> nums[0] >> nums[1] >> nums[2];
    cout << sol.triangleType(nums) << endl;
    return 0;
}
