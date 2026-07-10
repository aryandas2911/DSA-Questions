// Ques Link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution
{
public:
    int shipWithinDays(vector<int> &weights, int days)
    {
        int ans;
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int d = 1;
            int load = 0;

            for (int w : weights)
            {
                if (load + w > mid)
                {
                    d++;
                    load = w;
                }
                else
                {
                    load += w;
                }
            }

            if (d <= days)
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
    Solution obj;

    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;

    cout << "Minimum ship capacity: "
         << obj.shipWithinDays(weights, days) << endl;

    return 0;
}