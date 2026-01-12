// Ques Link: https://leetcode.com/problems/longest-common-prefix/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        size_t m = strs[0].size();
        for (auto &i : strs)
        {
            m = min(i.size(), m);
        }

        string pre = "";
        for (size_t i = 0; i < m; i++)
        {
            char a = strs[0][i];
            for (auto &j : strs)
            {
                if (j[i] != a)
                    return pre;
            }
            pre += a;
        }
        return pre;
    }
};

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    Solution obj;
    cout << obj.longestCommonPrefix(strs);
    return 0;
}
