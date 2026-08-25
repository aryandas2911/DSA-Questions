// Ques Link: https://leetcode.com/problems/partition-array-according-to-given-pivot/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        vector<int> less;
        vector<int> equal;
        vector<int> high;

        for (auto i : nums)
        {
            if (i < pivot)
            {
                less.push_back(i);
            }
            else if (i == pivot)
            {
                equal.push_back(i);
            }
            else
            {
                high.push_back(i);
            }
        }

        less.insert(less.end(), equal.begin(), equal.end());
        less.insert(less.end(), high.begin(), high.end());

        return less;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {9, 12, 5, 10, 14, 3, 10};
    int pivot = 10;

    vector<int> result = obj.pivotArray(nums, pivot);

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}