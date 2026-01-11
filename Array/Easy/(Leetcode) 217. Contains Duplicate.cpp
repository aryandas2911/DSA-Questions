// Ques Link: https://leetcode.com/problems/contains-duplicate/description/

#include <iostream>
#include <vector>
#include <algorithm> // for sort

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] == nums[i])
                return true;
        }
        return false;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};

    if (sol.containsDuplicate(nums))
    {
        cout << "Array contains duplicates." << endl;
    }
    else
    {
        cout << "Array does not contain duplicates." << endl;
    }

    return 0;
}
