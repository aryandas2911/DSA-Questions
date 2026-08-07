// Ques Link: https://leetcode.com/problems/find-missing-elements/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findMissingElements(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        vector<int> answer;

        for (int i = nums[0]; i < nums[nums.size() - 1]; i++)
        {
            if (!binary_search(nums.begin(), nums.end(), i))
            {
                answer.push_back(i);
            }
        }

        return answer;
    }
};

int main()
{
    vector<int> nums = {1, 2, 4, 6, 7};

    Solution obj;

    vector<int> result = obj.findMissingElements(nums);

    cout << "Missing elements: ";

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}