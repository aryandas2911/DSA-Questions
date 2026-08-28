// Ques Link: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int ans = 0;

        for (auto i : operations)
        {
            if (i == "--X" || i == "X--")
            {
                ans--;
            }
            else
            {
                ans++;
            }
        }

        return ans;
    }
};

int main()
{
    Solution obj;

    vector<string> operations = {"--X", "X++", "X++"};

    cout << obj.finalValueAfterOperations(operations) << endl;

    return 0;
}