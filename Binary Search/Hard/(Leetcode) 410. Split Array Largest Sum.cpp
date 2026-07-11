// Ques Link: https://leetcode.com/problems/split-array-largest-sum/description/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution
{
public:
    int splitArray(vector<int> &nums, int k)
    {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = 0;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int subarrays = 1;
            int sum = 0;

            for (int i : nums)
            {
                if (sum + i > mid)
                {
                    subarrays++;
                    sum = i;
                }
                else
                {
                    sum += i;
                }
            }

            if (subarrays > k)
            {
                low = mid + 1;
            }
            else
            {
                ans = mid;
                high = mid - 1;
            }
        }

        return ans;
    }
};

int main()
{
    int n, k;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cin >> k;

    Solution obj;
    cout << obj.splitArray(nums, k) << endl;

    return 0;
}