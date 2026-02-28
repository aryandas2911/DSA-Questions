// Ques Link: https://leetcode.com/problems/merge-close-characters/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string mergeCharacters(string s, int k)
    {
        string final = "";
        unordered_map<char, int> pos;

        for (int i = 0; i < s.length(); i++)
        {
            if (pos.count(s[i]) && (final.length() - pos[s[i]]) <= k)
            {
                continue;
            }
            final.push_back(s[i]);
            pos[s[i]] = final.length() - 1;
        }

        return final;
    }
};

int main()
{
    Solution sol;

    string s = "abca";
    int k = 3;

    string result = sol.mergeCharacters(s, k);

    cout << "Output: " << result << endl;

    return 0;
}