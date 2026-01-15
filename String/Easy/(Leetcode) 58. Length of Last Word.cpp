// Ques Link: https://leetcode.com/problems/length-of-last-word/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int len = 0;

        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                len++;
            }
            else if (len != 0)
            {
                break;
            }
        }
        return len;
    }
};

int main()
{
    Solution obj;
    string s;

    getline(cin, s);
    cout << obj.lengthOfLastWord(s) << endl;

    return 0;
}
