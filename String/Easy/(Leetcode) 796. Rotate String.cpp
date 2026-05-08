// Ques Link: https://leetcode.com/problems/rotate-string/description/?envType=daily-question&envId=2026-05-08

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        if (s.length() != goal.length())
            return false;

        int length = s.length();

        for (int i = 0; i < length; i++)
        {
            rotate(s.begin(), s.begin() + 1, s.end());

            if (s == goal)
                return true;
        }

        return false;
    }
};

int main()
{
    Solution obj;

    string s = "abcde";
    string goal = "cdeab";

    if (obj.rotateString(s, goal))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}