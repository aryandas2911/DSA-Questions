// Ques Link: https://leetcode.com/problems/contains-duplicate-ii/description/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mpp.find(nums[i]) != mpp.end() && abs(mpp[nums[i]] - i) <= k)
                return true;
            mpp[nums[i]] = i;
        }
        return false;
    }
};

int main()
{
    Solution sol;
    vector<int> nums1 = {1, 2, 3, 1};
    int k1 = 3;
    cout << (sol.containsNearbyDuplicate(nums1, k1) ? "true" : "false") << endl;
    return 0;
}
