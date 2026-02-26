// Ques Link: https://leetcode.com/problems/majority-element/description/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int ele;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (cnt == 0)
            {
                ele = nums[i];
                cnt = 1;
            }
            else if (nums[i] == ele)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == ele)
            {
                count++;
            }
        }
        if (count > (nums.size() / 2))
        {
            return ele;
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    vector<int> nums1 = {2,2,1,1,1,2,2};
    cout << sol.majorityElement(nums1) << endl;
    return 0;
}
