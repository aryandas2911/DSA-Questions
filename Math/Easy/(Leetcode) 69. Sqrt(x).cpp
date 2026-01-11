// Ques Link: https://leetcode.com/problems/sqrtx/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        int beg = 1, end = x;
        int ans = 0;

        while (beg <= end)
        {
            int mid = beg + (end - beg) / 2;
            if (mid <= x / mid)
            {
                ans = mid;
                beg = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    cout << "Integer square root: " << sol.mySqrt(8) << endl;
    return 0;
}
