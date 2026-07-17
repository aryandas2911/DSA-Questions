// Ques Link: https://leetcode.com/problems/summary-ranges/description/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> ans;

        if (nums.empty())
        {
            return ans;
        }

        int start = 0, end = 0;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1] + 1)
            {
                end = i;
            }
            else
            {
                if (start == end)
                    ans.push_back(to_string(nums[start]));
                else
                    ans.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));

                start = i;
                end = i;
            }
        }

        if (start == end)
            ans.push_back(to_string(nums[start]));
        else
            ans.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));

        return ans;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {0, 1, 2, 4, 5, 7};

    vector<string> result = obj.summaryRanges(nums);

    cout << "Summary Ranges:\n";
    for (const string &s : result)
    {
        cout << s << endl;
    }

    return 0;
}