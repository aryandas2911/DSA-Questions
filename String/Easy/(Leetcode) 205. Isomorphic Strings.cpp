// Ques Link: https://leetcode.com/problems/isomorphic-strings/description/

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int m1[256] = {0};
        int m2[256] = {0};

        for (int i = 0; i < s.size(); i++)
        {
            if (m1[s[i]] != m2[t[i]])
                return false;

            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }
        return true;
    }
};

int main()
{
    Solution sol;

    string s = "paper";
    string t = "title";

    cout << (sol.isIsomorphic(s, t) ? "True" : "False") << endl;

    return 0;
}
