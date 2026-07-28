// Ques Link: https://leetcode.com/problems/array-partition/description/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int arrayPairSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i = 0; i < nums.size() - 1; i += 2)
        {
            sum += nums[i];
        }
        return sum;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {1, 4, 3, 2};
    // You can also test:
    // vector<int> nums = {6, 2, 6, 5, 1, 2};

    cout << "Maximum Sum = " << obj.arrayPairSum(nums) << endl;

    return 0;
}