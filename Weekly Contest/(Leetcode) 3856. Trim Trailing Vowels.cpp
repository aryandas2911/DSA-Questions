// Ques Link: https://leetcode.com/problems/trim-trailing-vowels/description/

#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string trimTrailingVowels(string s)
    {
        while (!s.empty() && (s.back() == 'a' || s.back() == 'e' ||
                              s.back() == 'i' || s.back() == 'o' || s.back() == 'u'))
        {
            s.pop_back();
        }
        return s;
    }
};

int main()
{
    Solution s;
    string x = s.trimTrailingVowels("idea");
    cout << x;
    return 0;
}