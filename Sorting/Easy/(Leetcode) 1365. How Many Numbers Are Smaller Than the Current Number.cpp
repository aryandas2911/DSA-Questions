// Ques Link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> copy(nums.begin(), nums.end());
        sort(copy.begin(), copy.end());

        unordered_map<int, int> smaller;

        for (int i = 0; i < copy.size(); i++)
        {
            if (!smaller.count(copy[i]))
            {
                smaller[copy[i]] = i;
            }
        }

        vector<int> ans;

        for (auto i : nums)
        {
            ans.push_back(smaller[i]);
        }

        return ans;
    }
};

int main()
{
    Solution solution;

    vector<int> nums = {8, 1, 2, 2, 3};

    vector<int> ans = solution.smallerNumbersThanCurrent(nums);

    cout << "Output: ";
    for (int x : ans)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}