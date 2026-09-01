// Ques Link: https://leetcode.com/problems/removing-minimum-and-maximum-from-array/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumDeletions(vector<int> &nums)
    {
        int n = nums.size();

        if (n == 1)
        {
            return 1;
        }

        int maxNum = INT_MIN;
        int minNum = INT_MAX;
        int maxIndex = 0;
        int minIndex = 0;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] > maxNum)
            {
                maxNum = nums[i];
                maxIndex = i;
            }

            if (nums[i] < minNum)
            {
                minNum = nums[i];
                minIndex = i;
            }
        }

        int bothFront = max(maxIndex, minIndex) + 1;
        int bothBack = n - min(maxIndex, minIndex);
        int minFrontMaxBack = minIndex + 1 + (n - maxIndex);
        int maxFrontMinBack = maxIndex + 1 + (n - minIndex);

        return min({bothFront,
                    bothBack,
                    minFrontMaxBack,
                    maxFrontMinBack});
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {2, 10, 7, 5, 4, 1, 8, 6};

    cout << obj.minimumDeletions(nums) << endl;

    return 0;
}