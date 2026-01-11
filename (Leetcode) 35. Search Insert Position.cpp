// Ques Link: https://leetcode.com/problems/search-insert-position/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int beg = 0, end = nums.size() - 1;

        while (beg <= end)
        {
            int mid = beg + (end - beg) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                beg = mid + 1;
            else
                end = mid - 1;
        }
        return beg;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    cout << "Position: " << sol.searchInsert(nums, target) << endl;

    return 0;
}
