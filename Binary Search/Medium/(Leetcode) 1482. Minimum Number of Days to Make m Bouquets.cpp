// Ques Link: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int minDays(vector<int> &bloomDay, int m, int k)
    {
        int n = bloomDay.size();
        int ans = -1;

        if (1LL * m * k > n)
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            int bouq = 0, cnt = 0;

            for (int day : bloomDay)
            {
                if (day <= mid)
                {
                    cnt++;
                }
                else
                {
                    bouq += cnt / k;
                    cnt = 0;
                }
            }

            bouq += cnt / k;

            if (bouq >= m)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3;
    int k = 1;

    cout << sol.minDays(bloomDay, m, k) << endl;

    return 0;
}