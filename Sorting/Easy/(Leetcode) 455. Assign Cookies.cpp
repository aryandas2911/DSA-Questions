// Ques Link: https://leetcode.com/problems/assign-cookies/description

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0, j = 0;

        while (i < g.size() && j < s.size())
        {
            if (s[j] >= g[i])
            {
                i++;
            }
            j++;
        }

        return i;
    }
};

int main()
{
    Solution obj;

    vector<int> g = {1, 2, 3};
    vector<int> s = {1, 1};

    cout << "Maximum content children: "
         << obj.findContentChildren(g, s) << endl;

    return 0;
}