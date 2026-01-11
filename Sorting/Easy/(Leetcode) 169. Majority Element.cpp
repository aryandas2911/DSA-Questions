// Ques Link: https://leetcode.com/problems/majority-element/description/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};

int main()
{
    Solution sol;
    vector<int> nums1 = {3, 2, 3};
    cout << sol.majorityElement(nums1) << endl;
    return 0;
}
