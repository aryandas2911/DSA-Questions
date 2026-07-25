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
        int first = n;
        int last = n;

        int low = 0, high = n - 1;

        // Lower bound
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] >= target)
            {
                first = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        if (first == n || nums[first] != target)
            return {};

        low = 0;
        high = n - 1;

        // Upper bound
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] > target)
            {
                last = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        for (int i = first; i < last; i++)
        {
            result.push_back(i);
        }

        return result;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {1, 2, 5, 2, 3};
    int target = 2;

    vector<int> ans = sol.targetIndices(nums, target);

    cout << "Target indices: ";
    for (int idx : ans)
    {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}