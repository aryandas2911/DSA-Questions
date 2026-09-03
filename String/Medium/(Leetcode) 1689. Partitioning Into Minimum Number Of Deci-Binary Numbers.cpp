// Ques Link: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minPartitions(string n)
    {
        int ans = 0;

        for (char i : n)
        {
            ans = max(ans, i - '0');
        }

        return ans;
    }
};

int main()
{
    string n;
    cin >> n;

    Solution obj;
    cout << obj.minPartitions(n) << endl;

    return 0;
}