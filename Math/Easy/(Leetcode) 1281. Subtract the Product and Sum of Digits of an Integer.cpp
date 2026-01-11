// Ques Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int p = 1, s = 0;
        while (n > 0)
        {
            int l = n % 10;
            p *= l;
            s += l;
            n /= 10;
        }
        return p - s;
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;
    cout << sol.subtractProductAndSum(n);
    return 0;
}
