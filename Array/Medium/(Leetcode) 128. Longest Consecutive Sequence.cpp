// Ques Link: https://leetcode.com/problems/longest-consecutive-sequence/description/

#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;

        int longest = 1;
        unordered_set<int> ele;

        for (int i = 0; i < n; i++)
        {
            ele.insert(nums[i]);
        }

        for (auto i : ele)
        {
            if (ele.find(i - 1) == ele.end())
            {
                int count = 1;
                int x = i;

                while (ele.find(x + 1) != ele.end())
                {
                    x += 1;
                    count += 1;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {100, 4, 200, 1, 3, 2};

    int result = obj.longestConsecutive(nums);

    cout << "Longest consecutive sequence length: " << result << endl;

    return 0;
}