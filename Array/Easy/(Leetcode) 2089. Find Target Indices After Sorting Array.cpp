// Ques Link: https://leetcode.com/problems/find-target-indices-after-sorting-array/description/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> targetIndices(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        vector<int> result;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                result.push_back(i);
            }
        }

        return result;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {1, 2, 5, 2, 3};
    int target = 2;

    vector<int> result = sol.targetIndices(nums, target);

    cout << "Target indices: ";
    for (int index : result)
    {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}