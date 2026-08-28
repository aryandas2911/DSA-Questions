// Ques Link: https://leetcode.com/problems/reverse-words-in-a-string-iii/description/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {

        int i = 0;
        int j = 0;
        string ans = "";

        while (i <= s.length() && j <= s.length())
        {

            if (s[j] == ' ')
            {
                string sub = s.substr(i, j - i);
                reverse(sub.begin(), sub.end());

                ans += sub;
                ans += ' ';

                i = j + 1;
                j++;
            }

            j++;
        }

        string sub = s.substr(i, j - i + 1);
        reverse(sub.begin(), sub.end());

        ans += sub;

        return ans;
    }
};

int main()
{
    Solution sol;

    string s;
    getline(cin, s);

    cout << sol.reverseWords(s) << endl;

    return 0;
}