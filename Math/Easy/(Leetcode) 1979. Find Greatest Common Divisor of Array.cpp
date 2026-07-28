// Ques Link: https://leetcode.com/problems/find-greatest-common-divisor-of-array/description/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for std::gcd

using namespace std;

class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return gcd(nums[0], nums[nums.size() - 1]);
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution obj;
    cout << obj.findGCD(nums) << endl;

    return 0;
}