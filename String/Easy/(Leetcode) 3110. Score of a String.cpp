// Ques Link: https://leetcode.com/problems/score-of-a-string/description/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Solution
{
public:
    int scoreOfString(string s)
    {
        int sum = 0;
        for (int i = 1; i < s.length(); i++)
        {
            sum += abs(s[i] - s[i - 1]);
        }
        return sum;
    }
};

int main()
{
    Solution sol;

    string s;
    cin >> s;

    cout << sol.scoreOfString(s) << endl;

    return 0;
}