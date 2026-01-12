// Ques Link: https://leetcode.com/problems/valid-anagram/description/

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int m1[256] = {0};
        int m2[256] = {0};

        if (s.size() != t.size())
            return false;

        for (int i = 0; i < s.size(); i++)
        {
            m1[s[i]]++;
            m2[t[i]]++;
        }

        for (char c : s)
        {
            if (m1[c] != m2[c])
                return false;
        }
        return true;
    }
};

int main()
{
    Solution sol;

    string s = "anagram";
    string t = "nagaram";

    cout << (sol.isAnagram(s, t) ? "True" : "False") << endl;

    return 0;
}
