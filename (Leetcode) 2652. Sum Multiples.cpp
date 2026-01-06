// Ques link: https://leetcode.com/problems/sum-multiples/

#include <iostream>
using namespace std;

class Solution
{
public:
    int sumOfMultiples(int n)
    {
        int c;
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
            {
                c += i;
            }
        }
        return c;
    }
};

int main()
{
    Solution s;
    int n;
    cin >> n;
    int k = s.sumOfMultiples(n);
    cout << k;
    return 0;
}