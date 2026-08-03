// Ques Link: https://leetcode.com/problems/arranging-coins/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    int arrangeCoins(int n)
    {
        int rows = 0;
        int low = 1, high = n;

        while (low <= high)
        {
            long long mid = low + (high - low) / 2;
            long long coinsUsed = mid * (mid + 1) / 2;

            if (coinsUsed <= n)
            {
                rows = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return rows;
    }
};

int main()
{
    Solution obj;

    int n;
    cout << "Enter number of coins: ";
    cin >> n;

    cout << "Complete rows: " << obj.arrangeCoins(n) << endl;

    return 0;
}