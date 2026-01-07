// Ques Link: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int num1 = 0, num2 = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % m != 0)
            {
                num1 += i;
            }
            else
            {
                num2 += i;
            }
        }
        return num1 - num2;
    }
};

int main()
{
    Solution s;
    int n, m;
    cin >> n >> m;
    int k = s.differenceOfSums(n, m);
    cout << k;
    return 0;
}