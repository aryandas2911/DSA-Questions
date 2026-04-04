// Ques Link: https://leetcode.com/problems/subarray-sum-equals-k/description/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> mpp;
        mpp[0] = 1;

        int preSum = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            preSum = preSum + nums[i];
            int remove = preSum - k;

            if (mpp.find(remove) != mpp.end())
            {
                count = count + mpp[remove];
            }

            mpp[preSum]++;
        }

        return count;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {1, 1, 1};
    int k = 2;

    int result = obj.subarraySum(nums, k);

    cout << "Number of subarrays with sum " << k << " = " << result << endl;

    return 0;
}