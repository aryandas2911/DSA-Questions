// Ques Link: https://leetcode.com/problems/single-element-in-a-sorted-array/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int n = nums.size();

        if (n == 1)
            return nums[0];
        if (nums[0] != nums[1])
            return nums[0];
        if (nums[n - 1] != nums[n - 2])
            return nums[n - 1];

        int left = 1;
        int right = n - 2;

        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
            {
                return nums[mid];
            }
            else if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) ||
                     (mid % 2 != 0 && nums[mid] == nums[mid - 1]))
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
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution obj;
    cout << obj.singleNonDuplicate(nums) << endl;

    return 0;
}