// Ques Link: https://leetcode.com/problems/consecutive-characters/description/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxPower(string s)
    {
        int count = 1;
        int ans = 1;

        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                count++;
            }
            else
            {
                count = 1;
            }

            ans = max(ans, count);
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    string s;
    cin >> s;

    cout << sol.maxPower(s) << endl;

    return 0;
}