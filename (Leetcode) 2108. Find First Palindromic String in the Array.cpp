// Ques Link: https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string firstPalindrome(vector<string> &words)
    {
        for (int i = 0; i < words.size(); i++)
        {
            int f = 1;
            int l = 0;
            int r = words[i].length() - 1;
            while (l < r)
            {
                if (words[i][l] != words[i][r])
                {
                    f = 0;
                    break;
                }
                l++;
                r--;
            }
            if (f)
            {
                return words[i];
            }
        }
        return "";
    }
};

int main()
{
    Solution sol;

    vector<string> words = {"abc", "car", "ada", "racecar", "cool"};
    cout << sol.firstPalindrome(words) << endl;

    return 0;
}