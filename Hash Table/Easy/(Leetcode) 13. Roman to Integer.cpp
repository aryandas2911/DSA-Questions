// Ques Link: https://leetcode.com/problems/roman-to-integer/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int num = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (i + 1 < s.length() && roman[s[i]] < roman[s[i + 1]])
                num -= roman[s[i]];
            else
                num += roman[s[i]];
        }
        return num;
    }
};

int main()
{
    Solution sol;

    string s = "MCMXCIV";
    cout << sol.romanToInt(s) << endl;

    return 0;
}
