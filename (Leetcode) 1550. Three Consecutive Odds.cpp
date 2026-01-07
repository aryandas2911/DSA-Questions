// Ques Link: https://leetcode.com/problems/three-consecutive-odds/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        for (int i = 0; i + 2 < arr.size(); i++)
        {
            if (arr[i] % 2 != 0 &&
                arr[i + 1] % 2 != 0 &&
                arr[i + 2] % 2 != 0)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution sol;

    vector<int> arr = {2, 6, 4, 1};
    cout << (sol.threeConsecutiveOdds(arr) ? "true" : "false") << endl;

    return 0;
}
