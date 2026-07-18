// Ques Link: https://leetcode.com/problems/third-maximum-number/description/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == first || nums[i] == second || nums[i] == third)
            {
                continue;
            }
            else if (nums[i] > first)
            {
                third = second;
                second = first;
                first = nums[i];
            }
            else if (nums[i] > second)
            {
                third = second;
                second = nums[i];
            }
            else if (nums[i] > third)
            {
                third = nums[i];
            }
        }

        return (third == LLONG_MIN) ? first : third;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {2, 2, 3, 1};
    // You can change the input to test other cases.

    cout << "Third Maximum: " << obj.thirdMax(nums) << endl;

    return 0;
}