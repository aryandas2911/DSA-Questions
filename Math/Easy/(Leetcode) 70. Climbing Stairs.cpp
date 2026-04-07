// Ques Link: https://leetcode.com/problems/climbing-stairs/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        int first = 0;
        int second = 1;
        int ans;

        for (int i = 0; i < n; i++)
        {
            ans = first + second;
            first = second;
            second = ans;
        }

        return ans;
    }
};

int main()
{
    Solution sol;
    int n;

    cout << "Enter number of stairs: ";
    cin >> n;

    int result = sol.climbStairs(n);

    cout << "Number of ways to climb: " << result << endl;

    return 0;
}