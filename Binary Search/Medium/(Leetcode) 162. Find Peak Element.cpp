// Ques Link: https://leetcode.com/problems/find-peak-element/description/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();

        if (n == 1)
            return 0;
        if (nums[0] > nums[1])
            return 0;
        if (nums[n - 1] > nums[n - 2])
            return n - 1;

        int left = 1;
        int right = n - 2;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
            {
                return mid;
            }
            else if (nums[mid] > nums[mid - 1])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return -1;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};

    int peakIndex = obj.findPeakElement(nums);

    cout << "Peak Index: " << peakIndex << endl;
    cout << "Peak Element: " << nums[peakIndex] << endl;

    return 0;
}