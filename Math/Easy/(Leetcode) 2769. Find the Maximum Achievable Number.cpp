// Ques Link: https://leetcode.com/problems/find-the-maximum-achievable-number/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    int theMaximumAchievableX(int num, int t)
    {
        return num + (2 * t);
    }
};

int main()
{
    Solution sol;

    int num, t;
    cin >> num >> t;

    cout << sol.theMaximumAchievableX(num, t) << endl;

    return 0;
}