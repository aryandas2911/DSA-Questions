// Ques Link: https://leetcode.com/problems/search-in-rotated-sorted-array/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size() - 1;
        int left = 0;
        int right = n;

        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[left] <= nums[mid])
            {
                if (nums[left] <= target && target <= nums[mid])
                {
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            else if (nums[mid] <= nums[right])
            {
                if (nums[mid] <= target && target <= nums[right])
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
        }

        return -1;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int index = obj.search(nums, target);

    if (index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}