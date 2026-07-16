// Ques Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxDepth(string s)
    {
        int ans = 0;
        int level = 0;

        for (char ch : s)
        {
            if (ch == '(')
            {
                level++;
                ans = max(ans, level);
            }
            else if (ch == ')')
            {
                level--;
            }
        }

        return ans;
    }
};

int main()
{
    Solution obj;

    string s;
    getline(cin, s);

    cout << obj.maxDepth(s) << endl;

    return 0;
}