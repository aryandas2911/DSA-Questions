// Ques Link: https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int countPairs(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] + nums[j] < target)
                {
                    count++;
                }
            }
        }

        return count;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {-1, 1, 2, 3, 1};
    int target = 2;

    int result = sol.countPairs(nums, target);

    cout << "Number of pairs: " << result << endl;

    return 0;
}