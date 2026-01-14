// Ques Link: https://leetcode.com/problems/container-with-most-water/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int l = 0;
        int r = height.size() - 1;
        int ans = 0;

        while (l < r)
        {
            ans = max(ans, min(height[l], height[r]) * (r - l));
            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << sol.maxArea(height) << endl;

    return 0;
}
