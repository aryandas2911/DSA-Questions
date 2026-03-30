// Ques Link: https://leetcode.com/problems/minimum-absolute-difference-between-two-values/description/

#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

class Solution
{
public:
    int minAbsoluteDifference(vector<int> &nums)
    {
        int ans = INT_MAX;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (nums[i] == 1 && nums[j] == 2)
                {
                    ans = min(ans, abs(i - j));
                }
            }
        }
        if (ans == INT_MAX)
            return -1;
        return ans;
    }
};

int main()
{
    Solution sol;

    vector<vector<int>> tests = {
        {1, 3, 5, 2, 8},
        {2, 4, 1, 6, 2},
        {5, 7, 9},
        {1, 2},
        {2, 1, 3, 1, 2}};

    for (int i = 0; i < tests.size(); i++)
    {
        cout << "Test " << i + 1 << ": ";
        for (int x : tests[i])
            cout << x << " ";
        cout << endl;

        int result = sol.minAbsoluteDifference(tests[i]);
        cout << "Minimum Absolute Difference (1 vs 2 index distance): "
             << result << endl
             << endl;
    }

    return 0;
}