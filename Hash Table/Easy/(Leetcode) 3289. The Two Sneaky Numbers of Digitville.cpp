// Ques Link: https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/description/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> getSneakyNumbers(vector<int> &nums)
    {
        unordered_map<int, int> freq;

        for (auto i : nums)
        {
            freq[i]++;
        }

        vector<int> ans;

        for (const auto &i : freq)
        {
            if (i.second == 2)
            {
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {0, 1, 1, 0, 2, 3};

    vector<int> ans = sol.getSneakyNumbers(nums);

    cout << "Sneaky numbers: ";
    for (int x : ans)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}