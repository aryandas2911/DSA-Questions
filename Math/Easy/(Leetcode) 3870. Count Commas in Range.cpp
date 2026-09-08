// Ques Link: https://leetcode.com/problems/count-commas-in-range/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    int countCommas(int n)
    {
        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i >= 1000)
            {
                ans++;
            }
        }

        return ans;
    }
};

int main()
{
    int n;
    cin >> n;

    Solution obj;
    cout << obj.countCommas(n) << endl;

    return 0;
}