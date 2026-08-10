// Ques Link: https://leetcode.com/problems/sum-of-unique-elements/description/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int sumOfUnique(vector<int> &nums)
    {
        unordered_map<int, int> s;
        int count = 0;

        for (auto i : nums)
        {
            s[i]++;
        }

        for (const auto &i : s)
        {
            if (i.second == 1)
            {
                count += i.first;
            }
        }

        return count;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {1, 2, 3, 2};

    cout << "Sum of unique elements: "
         << sol.sumOfUnique(nums) << endl;

    return 0;
}