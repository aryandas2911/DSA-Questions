// Ques Link: https://leetcode.com/problems/number-of-arithmetic-triplets/description/

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    int arithmeticTriplets(vector<int> &nums, int diff)
    {
        int count = 0;
        unordered_set<int> s(nums.begin(), nums.end());

        for (int i : nums)
        {
            if (s.find(i + diff) != s.end() &&
                s.find(i + 2 * diff) != s.end())
            {
                count++;
            }
        }

        return count;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {0, 1, 4, 6, 7, 10, 13};
    int diff = 3;

    cout << sol.arithmeticTriplets(nums, diff) << endl;

    return 0;
}