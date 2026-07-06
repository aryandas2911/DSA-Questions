// Ques Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int ans = INT_MAX;

        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (nums[left] <= nums[mid])
            {
                ans = min(ans, nums[left]);
                left = mid + 1;
            }
            else if (nums[mid] <= nums[right])
            {
                ans = min(ans, nums[mid]);
                right = mid - 1;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    Solution obj;
    cout << "Minimum element: " << obj.findMin(nums) << endl;

    return 0;
}