// Ques Link: https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> minOperations(string boxes)
    {
        vector<int> ans;
        vector<int> ball_index;

        for (int i = 0; i < boxes.length(); i++)
        {
            if (boxes[i] == '1')
            {
                ball_index.push_back(i);
            }
        }

        for (int i = 0; i < boxes.length(); i++)
        {
            int sum = 0;

            for (auto j : ball_index)
            {
                sum += abs(i - j);
            }

            ans.push_back(sum);
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    string boxes;
    cin >> boxes;

    vector<int> ans = sol.minOperations(boxes);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}