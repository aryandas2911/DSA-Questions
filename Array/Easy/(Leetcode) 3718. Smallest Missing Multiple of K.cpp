// Ques Link: https://leetcode.com/problems/smallest-missing-multiple-of-k/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int missingMultiple(vector<int> &nums, int k)
    {
        for (int i = 1;; i++)
        {
            if (find(nums.begin(), nums.end(), k * i) == nums.end())
            {
                return k * i;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> nums = {2, 4, 6, 8};
    int k = 2;

    Solution obj;
    cout << obj.missingMultiple(nums, k) << endl;

    return 0;
}