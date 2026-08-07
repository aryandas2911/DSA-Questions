// Ques Link: https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double minimumAverage(vector<int> &nums)
    {
        vector<double> averages;
        sort(nums.begin(), nums.end());

        for (int i = 0; i <= nums.size() / 2; i++)
        {
            averages.push_back((nums[i] + nums[nums.size() - 1 - i]) / 2.0);
        }

        return *min_element(averages.begin(), averages.end());
    }
};

int main()
{
    vector<int> nums = {7, 8, 3, 4, 15, 13, 4, 1};

    Solution obj;

    cout << fixed << setprecision(2);
    cout << obj.minimumAverage(nums) << endl;

    return 0;
}