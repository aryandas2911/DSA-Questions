// Ques Link: https://leetcode.com/problems/longest-palindromic-substring/description/

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        if (s.length() == 1)
        {
            return s;
        }

        string ans = s.substr(0, 1);
        int len = 1;

        for (int i = 0; i < s.length(); i++)
        {
            int j = i;
            int k = i;

            while (j >= 0 && k < s.length() && s[j] == s[k])
            {
                string sub = s.substr(j, k - j + 1);
                int sub_len = sub.length();

                if (sub_len > len)
                {
                    len = sub_len;
                    ans = sub;
                }

                j--;
                k++;
            }
        }

        for (int i = 0; i < s.length() - 1; i++)
        {
            int j = i;
            int k = i + 1;

            while (j >= 0 && k < s.length() && s[j] == s[k])
            {
                string sub = s.substr(j, k - j + 1);
                int sub_len = sub.length();

                if (sub_len > len)
                {
                    len = sub_len;
                    ans = sub;
                }

                j--;
                k++;
            }
        }

        return ans;
    }
};

int main()
{
    Solution obj;

    string s;
    cout << "Enter string: ";
    cin >> s;

    cout << "Longest Palindromic Substring: "
         << obj.longestPalindrome(s) << endl;

    return 0;
}