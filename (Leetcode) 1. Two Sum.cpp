// Ques Link: https://leetcode.com/problems/two-sum/description/

#include <iostream>
#include <vector>
using namespace std;
    
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (nums[j] == target - nums[i])
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = s.twoSum(nums, target);

    cout << result[0] << " " << result[1] << endl;
    return 0;
}