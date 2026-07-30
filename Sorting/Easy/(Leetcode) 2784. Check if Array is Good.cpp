// Ques Link: https://leetcode.com/problems/check-if-array-is-good/description/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    bool isGood(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n - 2; i++)
        {
            if (nums[i + 1] != nums[i] + 1)
            {
                return false;
            }
        }

        if (nums[n - 1] != n - 1 || nums[n - 2] != n - 1)
        {
            return false;
        }

        return true;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {2, 1, 3, 3}; // Example input

    if (obj.isGood(nums))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}