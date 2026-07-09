// Ques Link: https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

class Solution
{
public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int n = nums.size();
        int ans = INT_MAX;

        if (n > threshold)
            return -1;

        int left = 1;
        int right = *max_element(nums.begin(), nums.end());

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int sum = 0;

            for (auto i : nums)
            {
                sum += ceil((double)i / mid);
            }

            if (sum <= threshold)
            {
                ans = min(ans, mid);
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;

    Solution obj;
    cout << "Smallest Divisor: " << obj.smallestDivisor(nums, threshold) << endl;

    return 0;
}