// Ques Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        int mini = prices[0];

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < mini)
            {
                mini = prices[i];
            }
            else
            {
                profit = max(profit, prices[i] - mini);
            }
        }
        return profit;
    }
};

int main()
{
    Solution sol;

    vector<int> prices = {7, 1, 4, 3, 6};

    cout << sol.maxProfit(prices) << endl;

    return 0;
}
